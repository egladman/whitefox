/*
Copyright 2016 Eli Gladman <eli.gladman@gmail.com>

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

// This keymap is for the "true fox" layout, modify accordingly

#include "keymap_common.h"
#include "led_controller.h"

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* 0: qwerty
  * ,---------------------------------------------------------------.
  * |Esc| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = | \ | ` |PgU|
  * |---------------------------------------------------------------|
  * | Tab | Q | W | E | R | T | Y | U | I | O | P | [ | ] |Backs|PgD|
  * |---------------------------------------------------------------|
  * | Gui  | A | S | D | F | G | H | J | K | L | ; | ' | Enter  |Del|
  * |---------------------------------------------------------------|
  * |Shif|   | Z | X | C | V | B | N | M | , | . | / |Shift |Up |Fn0|
  * |---------------------------------------------------------------|
  * |Fn0 |Ctrl|Alt |       Space      |Fn2 |Fn1 |    |   Lef|Dow|Rig|
  * `---------------------------------------------------------------'
  */
  KEYMAP( \
    ESC,    1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL,BSLS, GRV,PGUP,\
    TAB,    Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC,BSPC,     PGDN,\
    LGUI,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT,  NO, ENT,      DEL,\
    FN14,  NO,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH, FN9,       UP, FN0,\
    FN0, FN10,LALT,                FN8,           FN2, FN1,  NO,     LEFT,DOWN,RGHT \
  ),


  /* 1: colemak
  * ,---------------------------------------------------------------.
  * |Esc| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = | \ | ` |PgU|
  * |---------------------------------------------------------------|
  * | Tab | Q | W | F | P | G | J | L | U | Y | ; | [ | ] |Backs|PgD|
  * |---------------------------------------------------------------|
  * | Gui  | A | R | S | T | D | H | N | E | I | O | ' | Enter  |Del|
  * |---------------------------------------------------------------|
  * |Shif|   | Z | X | C | V | B | K | M | , | . | / |Shift |Up |Fn0|
  * |---------------------------------------------------------------|
  * |Fn0 |Ctrl|Alt |       Space      |Fn2 |Fn1 |    |   Lef|Dow|Rig|
  * `---------------------------------------------------------------'
  */
  KEYMAP( \
    ESC,    1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL,BSLS, GRV,PGUP,\
    TAB,    Q,   W,   F,   P,   G,   J,   L,   U,   Y,SCLN,LBRC,RBRC,BSPC,     PGDN,\
    LGUI,   A,   R,   S,   T,   D,   H,   N,   E,   I,   O,QUOT,  NO, ENT,      DEL,\
    FN14,  NO,   Z,   X,   C,   V,   B,   K,   M,COMM, DOT,SLSH, FN9,       UP, FN0,\
    FN0, FN10,LALT,                FN8,           FN2, FN1,  NO,     LEFT,DOWN,RGHT \
  ),


  /* 2: dvorak
  * ,---------------------------------------------------------------.
  * |Esc| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = | \ | ` |PgU|
  * |---------------------------------------------------------------|
  * | Tab | ' | , | . | P | Y | F | G | C | R | L | / | = |Backs|PgD|
  * |---------------------------------------------------------------|
  * | Gui  | A | O | E | U | I | D | H | T | N | S | - | Enter  |Del|
  * |---------------------------------------------------------------|
  * |Shif|   | ; | Q | J | K | X | B | M | W | V | Z |Shift |Up |Fn0|
  * |---------------------------------------------------------------|
  * |Fn0 |Ctrl|Alt |       Space      |Fn2 |Fn1 |    |   Lef|Dow|Rig|
  * `---------------------------------------------------------------'
  */
  KEYMAP( \
    ESC,    1,   2,   3,   4,   5,   6,   7,   8,   9,   0,LBRC,RBRC,BSLS, GRV,PGUP,\
    TAB, QUOT,COMM, DOT,   P,   Y,   F,   G,   C,   R,   L,SLSH, EQL,BSPC,     PGDN,\
    LGUI,   A,   O,   E,   U,   I,   D,   H,   T,   N,   S,MINS,  NO, ENT,      DEL,\
    FN14,  NO,SCLN,   Q,   J,   K,   X,   B,   M,   W,   V,   Z,RSFT,       UP, FN0,\
    FN0, FN10,LALT,                FN8,           FN2, FN1,  NO,     LEFT,DOWN,RGHT \
  ),


  /* 3: workman
  * ,---------------------------------------------------------------.
  * |Esc| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = | \ | ` |PgU|
  * |---------------------------------------------------------------|
  * | Tab | Q | D | R | W | B | J | F | U | P | ; | [ | ] |Backs|PgD|
  * |---------------------------------------------------------------|
  * | Gui  | A | S | H | T | G | Y | N | E | O | I | ' | Enter  |Del|
  * |---------------------------------------------------------------|
  * |Shif|   | Z | X | M | C | V | K | L | , | . | / |Shift |Up |Fn0|
  * |---------------------------------------------------------------|
  * |Fn0 |Ctrl|Alt |       Space      |Fn2 |Fn1 |    |   Lef|Dow|Rig|
  * `---------------------------------------------------------------'
  */
  KEYMAP( \
    ESC,    1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL,BSLS, GRV,PGUP,\
    TAB,    Q,   D,   R,   W,   B,   J,   F,   U,   P,SCLN,LBRC,RBRC,BSPC,     PGDN,\
    LGUI,   A,   S,   H,   T,   G,   Y,   N,   E,   O,   I,QUOT,  NO, ENT,      DEL,\
    FN14,  NO,   Z,   X,   M,   C,   V,   K,   L,COMM, DOT,SLSH,RSFT,       UP, FN0,\
    FN0, FN10,LALT,                FN8,           FN2, FN1,  NO,     LEFT,DOWN,RGHT \
  ),


  /* 4: Primary Function Layer*/
  KEYMAP( \
    PWR,   F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12,TRNS,TRNS,TRNS,\
    CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,  UP,TRNS,TRNS,     TRNS,\
    TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,TRNS,TRNS,HOME,PGUP,LEFT,RGHT,TRNS,     TRNS,TRNS,\
    TRNS,TRNS,FN13,FN12,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,PGDN,DOWN,TRNS,     PGUP,TRNS,\
    TRNS,TRNS,TRNS,               TRNS,          TRNS,TRNS,TRNS,     TRNS,PGDN,TRNS \
  ),


  /* 5: Mouse Mode*/
  KEYMAP( \
    TRNS,ACL0,ACL1,ACL2,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,\
    TRNS,TRNS,MS_U,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,WH_U,TRNS,TRNS,     TRNS,\
    TRNS,MS_L,MS_D,MS_R,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,WH_L,WH_R,TRNS,     TRNS,TRNS,\
    TRNS,TRNS,TRNS,TRNS,BTN3,BTN1,BTN2,BTN4,BTN5,WBAK,WFWD,WH_D,TRNS,     TRNS,TRNS,\
    TRNS,TRNS,TRNS,               BTN1,          TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS \
  ),


  /* 6: Layout selector*/
  KEYMAP( \
    TRNS,FN4, FN5, FN6, FN7, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,\
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,\
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,\
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,WBAK,WFWD,TRNS,TRNS,     TRNS,TRNS,\
    TRNS,TRNS,TRNS,               TRNS,          TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS \
  ),

};

#define ACTION_LEDS_LOGO 1

enum macro_id {
  HELLO,
  REPETITIVE_SPACE,
};

const uint16_t fn_actions[] = {
  [0]  = ACTION_LAYER_MOMENTARY(4),   // to Primary Function overlay
  [1] = ACTION_LAYER_MOMENTARY(6),    // to Layout Selector overlay
  [2] = ACTION_LAYER_MOMENTARY(5),    // to Mouse Mode

  [4] = ACTION_DEFAULT_LAYER_SET(0),  // set qwerty layout
  [5] = ACTION_DEFAULT_LAYER_SET(1),  // set colemak layout
  [6] = ACTION_DEFAULT_LAYER_SET(2),  // set dvorak layout
  [7] = ACTION_DEFAULT_LAYER_SET(3),  // set workman layout

  [8] = ACTION_LAYER_TAP_KEY(4, KC_SPC),
  [9] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_GRV),

  [10] = ACTION_MODS_ONESHOT(MOD_LCTL),
  [14] = ACTION_MODS_ONESHOT(MOD_LSFT),

  // [11] = ACTION_MACRO(HELLO),
  [12] = ACTION_MACRO(REPETITIVE_SPACE),

  [13] = ACTION_FUNCTION(ACTION_LEDS_LOGO),
};


void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
  (void)opt;
  switch(id) {
    case ACTION_LEDS_LOGO:
      // toggle TMK LOGO LEDs on press
      if(record->event.pressed) {
        // signal the LED controller thread
        chMBPost(&led_mailbox, LED_MSG_LOGO_TOGGLE, TIME_IMMEDIATE);
      }
      break;
  }
}


const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  switch (id) {
    case HELLO:
      return (record->event.pressed ?
        MACRO( T(H),T(E),T(L),T(L),T(O), END ) :
        MACRO_NONE );
    case REPETITIVE_SPACE:
      return (record->event.pressed ?
        MACRO( D(SPACE), END ) :
        MACRO_NONE );
  }
  return MACRO_NONE;
}