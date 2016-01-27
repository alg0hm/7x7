/*
 * =====================================================================================
 *
 *       Filename:  volume.c
 *
 *    Description:  set Volume Hifiberry Amp and Dac+
 *
 *        Version:  1.0
 *        Created:  01/17/16 00:45:08
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  David Ferreira (df), david.io.ferreira@gmail.com  
 *   Organization:  
 *
 * =====================================================================================
 */

#include <alsa/asoundlib.h>
#include <math.h>
#include "volume.h"

#define ALSA_PCM_NEW_HW_PARAMS_API

int volume_set(int volume)
{
    long min, max;
    snd_mixer_t *handle;
    snd_mixer_selem_id_t *sid;
    const char *card = "default";
    const char *selem_name = "Master";


    snd_mixer_open(&handle, 0);
    snd_mixer_attach(handle, card);
    snd_mixer_selem_register(handle, NULL, NULL);
    snd_mixer_load(handle);

    snd_mixer_selem_id_alloca(&sid);
    snd_mixer_selem_id_set_index(sid, 0);
    snd_mixer_selem_id_set_name(sid, selem_name);
    snd_mixer_elem_t* elem = snd_mixer_find_selem(handle, sid);

    snd_mixer_selem_get_playback_volume_range(elem, &min, &max);
    
      
    int v = volume*max /100;
    snd_mixer_selem_set_playback_volume_all(elem, v);
    snd_mixer_close(handle);
}

int volume_down(int vol_min, int vol_max)
{
    long min, max;
    snd_mixer_t *handle;
    snd_mixer_selem_id_t *sid;
    const char *card = "default";
    const char *selem_name = "Master";


    snd_mixer_open(&handle, 0);
    snd_mixer_attach(handle, card);
    snd_mixer_selem_register(handle, NULL, NULL);
    snd_mixer_load(handle);

    snd_mixer_selem_id_alloca(&sid);
    snd_mixer_selem_id_set_index(sid, 0);
    snd_mixer_selem_id_set_name(sid, selem_name);
    snd_mixer_elem_t* elem = snd_mixer_find_selem(handle, sid);

    snd_mixer_selem_get_playback_volume_range(elem, &min, &max);
    
    for (int i = vol_max; i>vol_min; i--) {
      
      int v = i*max /100;
      snd_mixer_selem_set_playback_volume_all(elem, v);
      //printf("min = %d, max= %d, volume = %d\n", min, max, volume);
      usleep(200000);
    }
    snd_mixer_close(handle);
}

int volume_up(int vol_min, int vol_max)
{
    long min, max;
    snd_mixer_t *handle;
    snd_mixer_selem_id_t *sid;
    const char *card = "default";
    const char *selem_name = "Master";


    snd_mixer_open(&handle, 0);
    snd_mixer_attach(handle, card);
    snd_mixer_selem_register(handle, NULL, NULL);
    snd_mixer_load(handle);

    snd_mixer_selem_id_alloca(&sid);
    snd_mixer_selem_id_set_index(sid, 0);
    snd_mixer_selem_id_set_name(sid, selem_name);
    snd_mixer_elem_t* elem = snd_mixer_find_selem(handle, sid);

    snd_mixer_selem_get_playback_volume_range(elem, &min, &max);
    
    for (int i = vol_min; i<vol_max; i++) {
      
      int v = i*max /100;
      snd_mixer_selem_set_playback_volume_all(elem, v);
      //printf("min = %d, max= %d, volume = %d\n", min, max, volume);
      usleep(200000);
    }
    snd_mixer_close(handle);
}


