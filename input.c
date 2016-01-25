/*
 * =====================================================================================
 *
 *       Filename:  button.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/17/16 00:39:04
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

/*******************************************************************************
* USED        BCM wPi   Name    Physical    Name      wPi BCM   USED           *
*_____________________________________________________________________________ *
*                       3.3V      1   2     5V                                 *
* HifiBerry   2   8     SDA.1     3   4     5V                                 *
* HifiBerry   3   9     SCL.1     5   6     GND                                *
*             4   7     GPIO.7    7   8     TxD       15  14                   *
* GND         9   10    RxD       16  15                                       *
* PIR         17  0     GPIO.0    11  12    GPIO.1    1   18    HifiBerry DAC+ *
* IR          27  2     GPIO.2    13  14    GND                                *
* Ultrasound  22  3     GPIO.3    15  16    GPIO.4    4   23                   *  
*                       3.3V      17  18    GPIO.5    5   24                   *
* MCP3008     10  12    MOSI      19  20    GND                                *
* MCP3008     9   13    MISO      21  22    GPIO.6    6   25                   *      
* MCP3008     11  14    SCLK      23  24    CE0       10  8     MCP3008        *
*                       GND       25  26    CE1       11  7                    *
*             0   30    SDA.0     27  28    SCL.0     31  1                    *
*             5   21    GPIO.21   29  30    GND                                *
* Button A    6   22    GPIO.22   31  32    GPIO.26   26  12                   *
* Button B    13  23    GPIO.23   33  34    GND                                *  
* Button C    19  24    GPIO.24   35  36    GPIO.27   27  16                   *  
* Button D    26  25    GPIO.25   37  38    GPIO.28   28  20                   *
*                       GND       39  40    GPIO.29   29  21    HifiBerry DAC+ *
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>
#include <mcp3004.h>
#include "volume.h"
#include "input.h"


#define pir_pin 17
#define ir_pin 27
#define ultrasound_pin 22
#define buttonA_pin 6
#define buttonB_pin 13
#define buttonC_pin 19
#define buttonD_pin 26

#define BASE 100
#define SPI_CHAN 0 


int button_status(void)  {
  buttonA();
  buttonB();
  buttonC();
  buttonD();
}

// interactive mode
void buttonA() {
  wiringPiSetup() ;
  mcp3004Setup (101, 0) ; // 3004 and 3008 are the same 4/8 channels

}

//volume UP
void buttonB() {
  //volume_up();
}

//read only mode
void buttonC() {

}

//volume DOWN
void buttonD() {
  //volume_down();
}

// ultrasound : 1 meter = 120 , 2 meters = 240*/	
void ultrasound()  {
  wiringPiSetup() ;
  mcp3004Setup (101, 0) ; // 3004 and 3008 are the same 4/8 channels

  for (;;)	{
    int x = analogRead (101) ;
    printf("%d\n",x);
    usleep(200000);
  }

}

//pir sensor
void pir()  {

}

// infrared sensor
void ir() {

}

