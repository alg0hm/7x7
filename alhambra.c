/*
 * =====================================================================================
 *
 *       Filename:  alhambra.c
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

#define pir 4 

#define ultrasound_pin 100
#define ir_pin 101

void alhambra_start()  {
    
  printf("\n\n***7x7 sculpture wait for signal***\n\n");
  for (;;)  {
    int vol_min = 30, vol_max = 85;

    if (digitalRead(pir) == 1) {
      play_track();
      volume_set(vol_max);
      alhambra_play(vol_min, vol_max);
    }
    printPir();
    delay(200);
  }
}

void alhambra_play(int min, int max)  {

  printf("\n\n***7x7 sculpture play***\n\n");
  for (;;)  {
//    button(min, max);
    if (digitalRead(pir) == 0) {
      for (int i=0; i<15; i++) {
        printf("counter = %d\n",i);
//        button(min, max);
        if (digitalRead(pir) == 1) {
            alhambra_play(min, max);
        }
        delay(1000);
      }
      volume_down(min, max);
      pause_track();
      alhambra_release(min,max);
    }
    printPir();
    delay(200);
  }
}

void alhambra_release(int min, int max)  {
  printf("\n\n***7x7 sculpture release***\n\n");
  for (;;)  {
//    button(min, max);
    if (digitalRead(pir) == 1) {
      release_track();
      volume_up(min, max);
      alhambra_play(min, max);
    }
    printPir();
    delay(50);
  }
}

void printPir() {

  int x = digitalRead(pir);
  printf("\npir = %d",x); 
}
