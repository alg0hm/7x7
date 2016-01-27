/*
 * =====================================================================================
 *
 *       Filename:  sculpture.c
 *
 *    Description:  7x7 musical sculpture
 *
 *        Version:  1.0
 *        Created:  01/17/16 01:17:39
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  David Ferreira (df), david.io.ferreira@gmail.com  
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>
#include <mcp3004.h>
#include "player.h"
#include "volume.h"

#define BASE 100
#define SPI_CHAN 0

#define buttonA_pin 5 
#define buttonB_pin 6
#define buttonC_pin 13
#define buttonD_pin 26

#define ultrasound_pin 100
#define ir_pin 101

void sculpture_start()  {
    
  printf("\n\n***7x7 sculpture wait for signal***\n\n");
  for (;;)  {
    int x = analogRead(ultrasound_pin); 
    int vol_min = 30, vol_max = 85;
    button(vol_min,vol_max);

    if (x<100)  {
      play_track();
      volume_set(vol_max);
      sculpture_play(vol_min, vol_max);
    }
    printf("ultrasound = %d\n",x);
    delay(200);
  }
}

void sculpture_play(int min, int max)  {

  printf("\n\n***7x7 sculpture play***\n\n");
  for (;;)  {
    int x = analogRead(ultrasound_pin); 
    button(min, max);
    if (x>100)  {
      for (int i=0; i<20000; i++) {
        int x = analogRead(ultrasound_pin);
        int t = i/1000;
        printf("counter = %d\n",t);
        button(min, max);
        if (x<100)  {
            sculpture_play(min, max);
        }
        delay(1);
      }
      volume_down(min, max);
      pause_track();
      sculpture_release(min,max);
    }
    printf("ultrasound = %d\n",x);
    delay(200);
  }
}

void sculpture_release(int min, int max)  {
  printf("\n\n***7x7 sculpture release***\n\n");
  for (;;)  {
    int x = analogRead(ultrasound_pin); 
    button(min, max);
    if (x<100)  {
      release_track();
      volume_up(min, max);
      sculpture_play(min, max);
    }
    printf("ultrasound = %d\n",x);
    delay(200);
  }

}

void button(int min, int max) {
  if (digitalRead(buttonA_pin) == 1) {
    //volume_set(max);  
    //play_track();
    printf("\nbutton A\n");
  }
  if (digitalRead(buttonB_pin) == 1) {
    printf("\nbutton B\n");
  }
  if (digitalRead(buttonC_pin) == 1) {
    printf("\nbutton C\n");
  }
  if (digitalRead(buttonD_pin) == 1) {
    printf("\nbutton D\n");
  }

}
