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

  /* 0: qwerty */
  KEYMAP(
    ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV, PGUP, \
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,     PGDN, \
    LGUI,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,NO,ENT,      DEL,\
    LSFT,NO,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,FN9,     UP,  FN0,\
    FN0,LCTL,LALT,               FN8,           FN2,FN1,NO,     LEFT,DOWN,RGHT \
  ),

  /* 1: colemak */
  KEYMAP(
    ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV, PGUP, \
    TAB, Q,   W,   F,   P,   G,   J,   L,   U,   Y,   SCLN,   LBRC,RBRC,BSPC,     PGDN, \
    LGUI,A,   R,   S,   T,   D,   H,   N,   E,   I,   O,QUOT,NO,ENT,      DEL,\
    LSFT,NO,Z,  X,   C,   V,   B,   K,   M,   COMM,DOT, SLSH,FN9,     UP,  FN0,\
    FN0,LCTL,LALT,               FN8,           FN2,FN1,NO,     LEFT,DOWN,RGHT \
  ),

  /* 2: dvorak */
  KEYMAP(
    ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV, PGUP, \
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,     PGDN, \
    LGUI,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,NO,ENT,      DEL,\
    LSFT,NO,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,     UP,  FN0,\
    FN0,LCTL,LALT,               FN8,           FN2,FN1,NO,     LEFT,DOWN,RGHT \
  ),

  /* 3: workman */
  KEYMAP(
    ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV, PGUP, \
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,     PGDN, \
    CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,NO,ENT,      DEL,\
    LSFT,NO,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,     UP,  FN0,\
    FN0,LCTL,LALT,               FN8,           FN2,FN1,NO,     LEFT,DOWN,RGHT \
  ),

  /* 4: Primary Function Layer */
  KEYMAP(
    PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11,F12, TRNS,TRNS, TRNS, \
    CAPS, TRNS,  TRNS,  TRNS, TRNS, TRNS, TRNS, TRNS, PSCR, SLCK, PAUS, UP,TRNS,TRNS,     TRNS, \
    TRNS,VOLD, VOLU, MUTE, TRNS, TRNS, TRNS, TRNS, HOME, PGUP,LEFT,RGHT,TRNS,TRNS,     TRNS,\
    TRNS,TRNS,TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, PPLS, PMNS,PGDN, DOWN,TRNS,     PGUP,  TRNS,\
    TRNS,TRNS,TRNS,               TRNS,           TRNS,TRNS,TRNS,     TRNS,PGDN,TRNS \
  ),

  /* 5: Mouse Mode */
  KEYMAP(
    TRNS,ACL0, ACL1, ACL2, TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,\
    TRNS,TRNS,MS_U,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,WH_U,TRNS,TRNS,     TRNS,\
    TRNS,MS_L,MS_D,MS_R,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,WH_L,WH_R,TRNS,TRNS,     TRNS,\
    TRNS,TRNS,TRNS,TRNS,BTN3,BTN1,BTN2,BTN4,BTN5,WBAK,WFWD,WH_D,TRNS,     TRNS,TRNS,\
    TRNS,TRNS,TRNS,               TRNS,          TRNS,TRNS,TRNS,          TRNS,TRNS,TRNS \
  ),

  /* 6: Layout selector */
  KEYMAP(
    TRNS,FN4, FN5, FN6, FN7, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,\
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,\
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,\
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,WBAK,WFWD,TRNS,TRNS,     TRNS,TRNS,\
    TRNS,TRNS,TRNS,               TRNS,          TRNS,TRNS,TRNS,          TRNS,TRNS,TRNS \
  ),


};

const uint16_t fn_actions[] = {
  [0]  = ACTION_LAYER_MOMENTARY(4), // to Primary Function overlay
  [1] = ACTION_LAYER_MOMENTARY(6),  // to Layout Selector overlay
  [2] = ACTION_LAYER_MOMENTARY(5),  // to Mouse Mode

  [4] = ACTION_DEFAULT_LAYER_SET(0),  // set qwerty layout
  [5] = ACTION_DEFAULT_LAYER_SET(1),  // set colemak layout
  [6] = ACTION_DEFAULT_LAYER_SET(2),  // set dvorak layout
  [7] = ACTION_DEFAULT_LAYER_SET(3),  // set workman layout

  [8] = ACTION_LAYER_TAP_KEY(4, KC_SPC),
  [9] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_GRV),
  [10] = ACTION_MODS_ONESHOT(MOD_LCTL),
};