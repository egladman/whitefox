/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

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
#include "keymap_common.h"

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* 0: Base layer (qwerty) */
  TRUEFOX_KEYMAP( \
    ESC,    1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL,BSLS, GRV, APP,\
    TAB,    Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC,BSPC,      DEL,\
    CAPS,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT,  NO, ENT,     PSCR,\
    LSFT,  NO,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH,RSFT,       UP, END,\
    LCTL, FN0,LALT,                SPC,          RALT,RCTL,  NO,     LEFT,DOWN,RGHT \
  ),

  /* 1: Primary Function Layer*/
  TRUEFOX_KEYMAP( \
    BTLD,   F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12,TRNS,TRNS,TRNS,\
    CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,\
    TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,\
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PMNS,PGDN,DOWN,TRNS,     TRNS,TRNS,\
    TRNS,TRNS,TRNS,               TRNS,          TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS \
  ),
};

const uint16_t fn_actions[] = {
  [0]  = ACTION_LAYER_MOMENTARY(1),  // to Primary Function overlay
};
