/*
Copyright 2021 Salicylic_Acid

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
      //|-----------------|
            KC_P0,   KC_P4,
      //|--------+--------|
            KC_P9,   KC_P3,    
      //|--------+--------|
            KC_P8,   KC_P2,
      //|--------+--------|
            KC_P7,   KC_P1,
      //|--------+--------|
            KC_P6, KC_MUTE, KC_VOLU,
      //|--------+--------|
            KC_P5, KC_PENT, KC_VOLD
      //|-----------------|
  )
};

//A description for expressing the layer position in LED mode.
layer_state_t layer_state_set_user(layer_state_t state) {
#ifdef RGBLIGHT_ENABLE
    switch (get_highest_layer(state)) {
    case 1:
      rgblight_sethsv_at(HSV_BLUE, 0);
      break;
    case 2:
      rgblight_sethsv_at(HSV_RED, 0);
      break;
    case 3:
      rgblight_sethsv_at(HSV_GREEN, 0);
      break;
    default: //  for any other layers, or the default layer
      rgblight_sethsv_at( 0, 0, 0, 0);
      break;
    }
    rgblight_set_effect_range( 1, 5);
#endif
return state;
}

keyevent_t encoder1_ccw = {
    .key = (keypos_t){.row = 0, .col = 12},
    .pressed = false
};

keyevent_t encoder1_cw = {
    .key = (keypos_t){.row = 0, .col = 13},
    .pressed = false
};

void matrix_scan_user(void) {
    if (IS_PRESSED(encoder1_ccw)) {
        encoder1_ccw.pressed = false;
        encoder1_ccw.time = (timer_read() | 1);
        action_exec(encoder1_ccw);
    }

    if (IS_PRESSED(encoder1_cw)) {
        encoder1_cw.pressed = false;
        encoder1_cw.time = (timer_read() | 1);
        action_exec(encoder1_cw);
    }
}

bool encoder_update_user(uint8_t index, bool clockwise) {
      if (clockwise) {
      encoder1_cw.pressed = true;
      encoder1_cw.time = (timer_read() | 1);
      action_exec(encoder1_cw);
      } else {
      encoder1_ccw.pressed = true;
      encoder1_ccw.time = (timer_read() | 1);
      action_exec(encoder1_ccw);
      }
    return true;
}
