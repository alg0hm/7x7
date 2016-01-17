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

}

//pir sensor
void pir()  {

}

// infrared sensor
void ir() {

}

