#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_MS_BTN2, CPI_SW, KC_MS_BTN1, KC_MS_BTN3, KC_MS_BTN3, LT(1, KC_MS_BTN4), LT(2, KC_MS_BTN5)
    ),
    [1] = LAYOUT(
        KC_MS_BTN2, CPI_SW, KC_MS_BTN1, KC_MS_BTN3, KC_MS_BTN3, KC_TRNS, ROT_R15
    ),
    [2] = LAYOUT(
        KC_MS_BTN2, CPI_SW, KC_MS_BTN1, KC_MS_BTN3, KC_MS_BTN3, ROT_L15, KC_TRNS
    ),
    [3] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =  { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN), },
    [1] =  { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [2] =  { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
    [3] =  { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
};
#endif
