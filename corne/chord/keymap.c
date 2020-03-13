#include QMK_KEYBOARD_H
//#define SYM	GL3
//#define NUM	GR3

//#include "engine.h"
//#include "keymap_engine.h"
#include "norwegian.h"
//#include "g/keymap_combos.h"




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_NO,   KC_NO,   KC_W,    KC_F,    KC_P,    KC_NO,                         KC_NO,   KC_G,     OE,     KC_Y,   KC_NO,   KC_NO,  \
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,   KC_A,    KC_R,    KC_S,     KC_T,   KC_D,                          KC_H,   NAV_N,    KC_O,    KC_I,    KC_L,   KC_NO,  \
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,    AA,   	 KC_Z,    KC_C,   KC_V,    KC_NO,                         KC_NO,   C_M,   KC_COMM,  KC_DOT,   MINS,   KC_NO,  \
  //|--------+--------+--------+--------—--------+--------—--------|  |--------—--------+--------—--------+--------+--------+--------|
                       KC_LGUI,      KC_E,         LCTL_T(KC_TAB),     ALT_T(KC_BSPC),   SFT_T(KC_SPC),   KC_RGUI  \
                    //'--------+-----------------+-----------------'  '-----------------+-----------------+--------'
    ),

