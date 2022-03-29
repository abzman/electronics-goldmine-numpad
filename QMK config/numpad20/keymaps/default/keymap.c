#include QMK_KEYBOARD_H
#ifdef AUDIO_ENABLE
#    include "audio.h"
#define CLOSE_ENCOUNTERS Q__NOTE(_D5), Q__NOTE(_E5), Q__NOTE(_C5), Q__NOTE(_C4), Q__NOTE(_G4),
static float song1[][2] = SONG(CLOSE_ENCOUNTERS);
#endif
void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  //debug_enable=true;
  //debug_matrix=true;
  audio_on();
  clicky_on();
  music_off();
  PLAY_SONG(song1);
  //debug_keyboard=true;
  //debug_mouse=true;
}


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_EQL, KC_PPLS, KC_SPC,   KC_TAB,
    KC_P7,   KC_P8,   KC_P9,   KC_PMNS,
    KC_P4,   KC_P5,   KC_P6,   KC_COMM,
    KC_P1,   KC_P2,   KC_P3,   KC_ENT,
    KC_P0,   KC_F,  KC_PDOT, KC_U
  )
};
