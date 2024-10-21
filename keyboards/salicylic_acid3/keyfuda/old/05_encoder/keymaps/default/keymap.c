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
  //,-----------------------------------|
      KC_WH_L, KC_WH_U, KC_VOLU, LCTL(KC_Z),
  //|--------+--------+--------+--------|
      KC_WH_R, KC_WH_D, KC_VOLD, LCTL(KC_Y),
  //,-----------------------------------|
  //,-----------------------------------|
       KC_ESC,   KC_F2,  KC_EQL,  KC_DEL,
  //|--------+--------+--------+--------|
        KC_P7,   KC_P8,   KC_P9, KC_PSLS,
  //|--------+--------+--------+--------|
        KC_P4,   KC_P5,   KC_P6, KC_PAST,
  //|--------+--------+--------+--------|
        KC_P1,   KC_P2,   KC_P3, KC_PMNS,
  //|--------+--------+--------+--------|
        KC_P0, KC_PDOT, KC_PENT, KC_PPLS
  //|-----------------------------------|
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
    .key = (keypos_t){.row = 5, .col = 0},
    .pressed = false
};

keyevent_t encoder1_cw = {
    .key = (keypos_t){.row = 6, .col = 0},
    .pressed = false
};

keyevent_t encoder2_ccw = {
    .key = (keypos_t){.row = 5, .col = 1},
    .pressed = false
};

keyevent_t encoder2_cw = {
    .key = (keypos_t){.row = 6, .col = 1},
    .pressed = false
};

keyevent_t encoder3_ccw = {
    .key = (keypos_t){.row = 5, .col = 2},
    .pressed = false
};

keyevent_t encoder3_cw = {
    .key = (keypos_t){.row = 6, .col = 2},
    .pressed = false
};

keyevent_t encoder4_ccw = {
    .key = (keypos_t){.row = 5, .col = 3},
    .pressed = false
};

keyevent_t encoder4_cw = {
    .key = (keypos_t){.row = 6, .col = 3},
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

    if (IS_PRESSED(encoder2_ccw)) {
        encoder2_ccw.pressed = false;
        encoder2_ccw.time = (timer_read() | 1);
        action_exec(encoder2_ccw);
    }

    if (IS_PRESSED(encoder2_cw)) {
        encoder2_cw.pressed = false;
        encoder2_cw.time = (timer_read() | 1);
        action_exec(encoder2_cw);
    }

    if (IS_PRESSED(encoder3_ccw)) {
        encoder3_ccw.pressed = false;
        encoder3_ccw.time = (timer_read() | 1);
        action_exec(encoder3_ccw);
    }

    if (IS_PRESSED(encoder3_cw)) {
        encoder3_cw.pressed = false;
        encoder3_cw.time = (timer_read() | 1);
        action_exec(encoder3_cw);
    }

    if (IS_PRESSED(encoder4_ccw)) {
        encoder4_ccw.pressed = false;
        encoder4_ccw.time = (timer_read() | 1);
        action_exec(encoder4_ccw);
    }

    if (IS_PRESSED(encoder4_cw)) {
        encoder4_cw.pressed = false;
        encoder4_cw.time = (timer_read() | 1);
        action_exec(encoder4_cw);
    }
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    if(index == 0){
      if (clockwise) {
      encoder1_cw.pressed = true;
      encoder1_cw.time = (timer_read() | 1);
      action_exec(encoder1_cw);
      } else {
      encoder1_ccw.pressed = true;
      encoder1_ccw.time = (timer_read() | 1);
      action_exec(encoder1_ccw);
      }
    } else if (index == 1) {
      if (clockwise) {
      encoder2_cw.pressed = true;
      encoder2_cw.time = (timer_read() | 1);
      action_exec(encoder2_cw);
      } else {
      encoder2_ccw.pressed = true;
      encoder2_ccw.time = (timer_read() | 1);
      action_exec(encoder2_ccw);
      }
    } else if (index == 2) {
      if (clockwise) {
      encoder3_cw.pressed = true;
      encoder3_cw.time = (timer_read() | 1);
      action_exec(encoder3_cw);
      } else {
      encoder3_ccw.pressed = true;
      encoder3_ccw.time = (timer_read() | 1);
      action_exec(encoder3_ccw);
      }
    } else if (index == 3) {
      if (clockwise) {
      encoder4_cw.pressed = true;
      encoder4_cw.time = (timer_read() | 1);
      action_exec(encoder4_cw);
      } else {
      encoder4_ccw.pressed = true;
      encoder4_ccw.time = (timer_read() | 1);
      action_exec(encoder4_ccw);
      }
    }
    return true;
}
