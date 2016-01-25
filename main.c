/*
 * =====================================================================================
 *
 *       Filename:  mpdplayer.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/12/16 11:12:24
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

#include "player.h"
#include "alhambra.h"
#include "boca.h"
#include "sculpture.h"
#include "input.h"
#include "volume.h"

int missing();

int main(int argc, char *argv[])  {

    int aflag = 0;
    int bflag = 0;
    int sflag = 0;
    int i;
    //int index;
    if (argc < 3) {
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
     printf("\nusage: %s --trackNumber\n", argv[0]);
     printf("\nmode:");
     printf("\n\t-a : Alhambra");
     printf("\n\t-b : Boca Verita");
     printf("\n\t-s : 7x7 Sculpture");
     printf("\n\ntrackNumber:");
     printf("\n\t1 : 7x7 sculpture - A = ROBERT WYATT = Red = Monday = Moon = Diana = Muladhara (Earth)");
     printf("\n\t2 : 7x7 sculpture - B = ARCHIE SHEPP = Orange = Tuesday = Mars = Svadhisthana (Water)");
     printf("\n\t3 : 7x7 sculpture - C = SEAN O'HAGAN = Yellow = Wednesday = Mercury = Manipurana (Fire)");
     printf("\n\t4 : 7x7 sculpture - D = MULATU ASTATKE = Green = Thursday = Jupiter = Anahata (Air)");
     printf("\n\t5 : 7x7 sculpture - E = KASSIN = Blue = Friday = Venus = Visuddha (Ether)");
     printf("\n\t6 : 7x7 sculpture - F = NILE RODGERS = Indigo = Saturday = Saturn = Anja (Soul)");
     printf("\n\t7 : 7x7 sculpture - G= TERRY RILEY = Violet = Sunday = Sun = Sahasrara (Vibration)");
     printf("\n\t8 : 7x7 Boca Verita - Robert Wyatt discussion");
     printf("\n\t9 : 7x7 Alhabra Wall - Alhambra main theme");
     printf("\n\t10 : 7x7 Alhambra Wall - Alhambra left theme");
     printf("\n\t11 : 7x7 Alhambra Wall - Alhambra right theme\n");
}


