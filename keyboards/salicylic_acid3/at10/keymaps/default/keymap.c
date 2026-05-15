/*
Copyright 2025 Salicylic_Acid

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
        MO(1),   MO(1),   MO(1),   MO(1),   MO(1),
        MO(1),   MO(1),   MO(1),   MO(1),   MO(1)
    ),
    [1] = LAYOUT(
        _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______
    ),
    [2] = LAYOUT(
        _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______
    ),
    [3] = LAYOUT(
        _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______
    ),
    [4] = LAYOUT(
        _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______
    ),
    [5] = LAYOUT(
        _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______
    ),
    [6] = LAYOUT(
        _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______
    ),
    [7] = LAYOUT(
        _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______
    ),
    [8] = LAYOUT(
        _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______
    ),
    [9] = LAYOUT(
        _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______
    ),
    [10] = LAYOUT(
        _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______
    ),
    [11] = LAYOUT(
        _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______
    )
};

//A description for expressing the layer position in LED mode.
layer_state_t layer_state_set_user(layer_state_t state) {
#ifdef RGBLIGHT_ENABLE
    switch (get_highest_layer(state)) {
    case 1:
      rgblight_sethsv_at(HSV_BLUE, 0);
      break;
    default: //  for any other layers, or the default layer
      rgblight_sethsv_at( 0, 0, 0, 0);
      break;
    }
#endif
return state;
}
