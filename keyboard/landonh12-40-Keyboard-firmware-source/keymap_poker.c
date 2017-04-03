#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP(
        ESC, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P, BSPC, \
        TAB, A,   S,   D,   F,   G,   H,   J,   K,   L,   ENT,  \
        LSFT,Z,   X,   C,   V,   B,   N,   M,  DOT, COMM, FN0, \
        LCTL,LGUI,LALT,          SPC,                     RALT, RCTL),

    /* 1: FN 0 */
    KEYMAP(
        TRNS, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,TRNS, \
        TRNS, F1,  F2,  F3,  F4,  F5,  F6, EQL, SCLN,QUOT,   BSLS,  \
        TRNS, UP, F11, F12, LBRC,RBRC,QUOT,SCLN,TRNS,SLSH,   FN0, \
        LEFT, DOWN,RGHT,          TRNS,               MINS,  TRNS),
    
    /* 2: FN 1 
    KEYMAP(
           ESC, 1,   W,   2,   3,   4,   5,   6,   7,   8,   9, BSPC, \
           TAB, A,   S,   D,   F,   G,   H,   J,   K,   L,   ENT,  \
           LSFT,Z,   X,   C,   V,   B,   N,   M,  DOT, FN1, RSFT, \
           LCTL,LGUI,LALT,          SPC,                     COMM, SLSH),
    
    /* 3: FN 2 
    KEYMAP(
           ESC, 1,   W,   2,   R,   4,   5,   6,   7,   8,   9, BSPC, \
           TAB, A,   S,   D,   3,   G,   H,   J,   K,   L,   ENT,  \
           LSFT,Z,   X,   C,   V,   B,   N,   M,  DOT, RSFT, PPLS, \
           LCTL,LGUI,LALT,          SPC,                     FN2, PAUS),
    */
};
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_LAYER_TOGGLE(2),
    [2] = ACTION_LAYER_TOGGLE(3),
};