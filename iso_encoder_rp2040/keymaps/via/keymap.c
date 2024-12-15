/* Copyright (C) 2024 Michael O'Toole
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

// File: echo/iso_encoder/keymaps/via/keymap.c

#include QMK_KEYBOARD_H


enum layer_names {
    BASE,
    FN,
    FNM,
    FNW
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /*  Row:    0        1        2        3        4        5        6         7        8         9      10       11       12       13       14       15         16       17    */
    [BASE] = LAYOUT_iso(
                KC_TRNS, KC_ESC,  KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR,   KC_SCRL, KC_PAUSE,
                KC_TRNS, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_INSERT, KC_HOME, KC_PGUP,
                KC_TRNS, KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_DEL,    KC_END,  KC_PGDN,
                KC_TRNS, KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT,  KC_TRNS,   KC_TRNS, KC_TRNS,
                KC_TRNS, KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_NUBS, KC_RSFT,          KC_TRNS,   KC_UP,   KC_TRNS,
                KC_TRNS, KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, KC_MENU, MO(FN),  KC_RCTL, KC_LEFT,   KC_DOWN, KC_RIGHT
            ),

    [FN]   = LAYOUT_iso(
                QK_BOOT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_TOG,   RGB_MOD, RGB_HUI,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,   _______, _______,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,   RGB_VAI, _______,
                _______, _______, _______, _______,                            _______,                            _______, _______, _______, _______, RGB_SAD,   RGB_VAD, RGB_SAI
            ),

    [FNM]   = LAYOUT_iso(
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
                _______, _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, _______, _______
            ),
    [FNW]   = LAYOUT_iso(
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
                _______, _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, _______, _______
            ),

};


#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [BASE] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [FN]   =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [FNM]  =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [FNW]  =   { ENCODER_CCW_CW(RGB_VAI, RGB_VAD) }
};
#endif


bool encoder_update_kb(uint8_t index, bool clockwise)
{
    if (index == 0) // encoder 1
    {
        if (clockwise)
        {
          tap_code(KC_VOLU);
        }
        else
        {
          tap_code(KC_VOLD);
        }
    }
    return true;
}

void keyboard_pre_init_user(void) {
  setPinOutput(GP26);
}

void keyboard_post_init_user(void) {
  writePinHigh(GP26);
}

enum custom_keycodes {
  LAYER_SCROLL = QK_USER_0
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case LAYER_SCROLL:
      if (!record->event.pressed) {
        //Already handled the keycode, no further processing is needed
        return false;
      }

      uint8_t current_layer = get_highest_layer(layer_state);
      if (current_layer > 3 || current_layer < 0) {
        return false;
      }

      uint8_t next_layer = current_layer + 1;
      if (next_layer > 3) {
        next_layer = 0;
      }

      if (next_layer == 0) {
        writePinHigh(GP26);
      }
      if (next_layer == 1) {
        writePinLow(GP26);
      }
      if (next_layer == 2) {
        writePinHigh(GP26);
      }
      if (next_layer == 3) {
        writePinHigh(GP26);
      }

      layer_move(next_layer);
      
      return false;
    default:
      return true; //Process all other keycodes normally
  }
}
