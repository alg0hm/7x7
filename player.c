/*
 * =====================================================================================
 *
 *       Filename:  player.c
 *
 *    Description:  audio player
 *
 *        Version:  1.0
 *        Created:  01/17/16 09:46:42
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
#include <mpd/player.h>
#include <mpd/client.h>
#include <mpd/status.h>
#include <mpd/entity.h>
#include <mpd/search.h>
#include <mpd/tag.h>
#include <mpd/message.h>
#include <mpd/status.h>

#include "player.h"

void play_track() {
  printf("\nTrack playing");
  struct mpd_connection *conn;
  conn = mpd_connection_new("127.0.0.1", 6600, 30000);
  mpd_run_play_pos(conn, 0);
}

void pause_track(){
  struct mpd_connection *conn;
  conn = mpd_connection_new("127.0.0.1", 6600, 30000);
  mpd_send_toggle_pause (conn);
}

void release_track() {
  struct mpd_connection *conn;
  conn = mpd_connection_new("127.0.0.1", 6600, 30000);
  mpd_run_play(conn);
}


