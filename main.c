/*
 * =====================================================================================
 *
 *       Filename:  mpdplayer.c
 *
 *    Description:  Application manager for 7x7 project - Jean Pierre Muller 
 *
 *        Version:  1.0
 *        Created:  01/12/16 11:12:24
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  David Ferreira (df), david.io.ferreira@gmail.com  
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <wiringPi.h>
#include <mcp3004.h>

#include "player.h"
#include "alhambra.h"
#include "boca.h"
#include "sculpture.h"
#include "volume.h"

#define BASE 100
#define SPI_CHAN 0

#define pir_pin 5
#define buttonA_pin 5 
#define buttonB_pin 6
#define buttonC_pin 13
#define buttonD_pin 26

#define ultrasound_pin 100
#define ir_pin 101

int missing();

int main(int argc, char *argv[])  {
    
    int aflag = 0;
    int bflag = 0;
    int sflag = 0;
    int i;
    wiringPiSetupGpio();
    mcp3004Setup(BASE, SPI_CHAN);
    pinMode(buttonA_pin,INPUT);
    pinMode(buttonB_pin,INPUT);
//    pinMode(buttonC_pin,INPUT);
    pinMode(buttonD_pin,INPUT);
//    pinMode(pir_pin, INPUT);

    if (argc < 2) {
      missing();
      return 0;
    }
    while ((i = getopt (argc, argv, "abs")) != -1)  { 
      switch (i)
      {
        case 'a':
          aflag = 1;
          alhambra_start(argv);
          break;
        case 'b':
          bflag = 1;
          boca_start(argv);
          break;
        case 's':
          sflag = 1;
          sculpture_start(argv);
          break;
        case '?':
          if (isprint (optopt)) {
            missing();
          }
          else if (isprint (optopt))  {
            printf("Missing option");
          }
          else  {
            printf ("Unknow option character\n");
          }
        default:
          printf ("\nstop\n");
      }
    }
}

int missing(int argc, char **argv) {
     printf("\nusage: %s -option\n", argv[0]);
     printf("\nmode:");
     printf("\n\t-a : Alhambra");
     printf("\n\t-b : Boca Verita");
     printf("\n\t-s : 7x7 Sculpture");
}
