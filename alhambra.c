/*
 * =====================================================================================
 *
 *       Filename:  alhambra.c
 *
 *    Description:  interactive walls in the Alahambra 
 *
 *        Version:  1.0
 *        Created:  01/17/16 01:22:18
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
#include "alhambra.h"
#include "player.h"

/* pir on top : main theme
 * ultrasound on side : voices with distance tracker on volume
 */

void alhambra_start (const char **argv) {
  printf("\n***Alhambra***\n\n");
  play_track();
  delay(10000);
  pause_track();
}
