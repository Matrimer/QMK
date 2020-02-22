#include QMK_KEYBOARD_H
#include "norwegian.h"
#include "g/keymap_combo.h"
//#include "g/keymap_engine.h"

extern keymap_config_t keymap_config;

#define BASE	0
#define NUM 	1
#define SYM 	2
#define NAV	3
//#define GAME	4


// Mod Tap Definitions
#define SYM_SPC	LT(SYM, KC_SPC)
#define NAV_T	LT(NAV, KC_T)
#define NAV_N	LT(NAV, KC_N)
#define NUM_D	LT(NUM, KC_D)
#define NUM_H	LT(NUM, KC_H)



           /* Combo map
            * ┌──────┬──────┬──────┬──────┬──────┬──────┐                       ┌──────┬──────┬──────┬──────┬──────┬──────┐
            * │      │      q     ESC                   │                       │     DQT    QOUT   ENT     ?      │      │
            * ├──────┼──────┼──────┼──────┼──────┼──────┤                       ├──────┼──────┼──────┼──────┼──────┼──────┤
            * │      │      │      │      │      |      │                       │      |      |      |      │      │      │
            * ├──────┼──────┼──────┼──────┼──────┼──────┤                       ├──────┼──────┼──────┼──────┼──────┼──────┤
            * │      │      x                           │                       │                  COMM            │      │
            * ├──────┼──────┼──────┼──────┼──────┼──────┤                       ├──────┼──────┼──────┼──────┼──────┼──────┤
            * │      |      │      │      |      │      │                       |      │      │      │      │      │      │
            * └──────┴──────┴──────┴──────┴──────┴──────┘                       └──────┴──────┴──────┴──────┴──────┴──────┘
	    */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	   /* Base layer
	    * ┌──────┬──────┬──────┬──────┬──────┬──────┐ 			┌──────┬──────┬──────┬──────┬──────┬──────┐
	    * │      │  w   │  f   │  p   │  g   │  ø   | 			│  ¨^  │  l   │  u   │  y   │  j   │      │
	    * ├──────┼──────┼──────┼──────┼──────┼──────┤ 			├──────┼──────┼──────┼──────┼──────┼──────┤
	    * │      │  a   │  r   │  s   │ NAV/t│ NUM/d│ 			│ NUM/h│ NAV/n│  o   |  i   │  l   │      │
	    * ├──────┼──────┼──────┼──────┼──────┼──────┤ 			├──────┼──────┼──────┼──────┼──────┼──────┤
	    * │      │  z   │  c   │  v   │  b   │  å   | 			|  æ   │  k   │  m   │  .:  │  -_  │      │      
	    * ├──────┼──────┼──────┼──────┼──────┼──────┤ 			├──────┼──────┼──────┼──────┼──────┼──────┤
	    * │      │ GAME │      │ META |LCTtab│SYMspc│ 			|SFTbs │LALT/e│ META │      │      │      │
	    * └──────┴──────┴──────┴──────┴──────┴──────┘ 			└──────┴──────┴──────┴──────┴──────┴──────┘
	    */
  [BASE] = LAYOUT_ortho_4x12( \
     KC_NO, KC_W,    KC_F,  KC_P,    KC_G,	    OE,			TOED,       	KC_L,	     KC_U,    KC_Y,   KC_J,  KC_NO, \
     KC_NO, KC_A,    KC_R,  KC_S,    NAV_T,	    NUM_D,		NUM_H,       	NAV_N,	     KC_O,    KC_I,   KC_L,  KC_NO, \
     KC_NO, KC_Z,    KC_C,  KC_V,    KC_B,	    AA,			AE,       	KC_K,	     KC_M,    KC_DOT, MINS,  KC_NO, \
     KC_NO, KC_NO, KC_NO, KC_LGUI, LCTL_T(KC_TAB), SYM_SPC,		SFT_T(KC_BSPC), ALT_T(KC_E), KC_RGUI, KC_NO,  KC_NO, KC_NO \
  ),

   /* Num layer
    * ┌──────┬──────┬──────┬──────┬──────┬──────┐ 		┌──────┬──────┬──────┬──────┬──────┬──────┐
    * │      │  F9  │  F10 │  F11 │  F12 │      │ 		│      │  7÷  │  8±  │  9   │      │      │
    * ├──────┼──────┼──────┼──────┼──────┼──────┤ 		├──────┼──────┼──────┼──────┼──────┼──────┤
    * │      │  F5  │  F6  │  F7  │  F8  │ TRNS │ 		│ TRNS │  4¼  │  5½  │  6⅝  │  0°  │      │
    * ├──────┼──────┼──────┼──────┼──────┼──────┤ 		├──────┼──────┼──────┼──────┼──────┼──────┤
    * │      │  F1  │  F2  │  F3  │  F4  │      │ 		│NUMLCK│  1¹  │  2²  │  3³  │      │      │
    * ├──────┼──────┼──────┼──────┼──────┼──────┤ 		├──────┼──────┼──────┼──────┼──────┼──────┤
    * │      │      │      │      |      │      | 		|      │      │      │      │      │      │
    * └──────┴──────┴──────┴──────┴──────┴──────┘ 		└──────┴──────┴──────┴──────┴──────┴──────┘
    */
  [NUM] = LAYOUT_ortho_4x12( \
    KC_NO, KC_F9, KC_F10, KC_F11,  KC_F12,   KC_NO,		KC_NO,   KC_7,    KC_8,    KC_9, KC_NO,   KC_NO, \
    KC_NO, KC_F5, KC_F6,  KC_F7,   KC_F8,    KC_TRNS,		KC_TRNS, KC_4,    KC_5,    KC_6, KC_0,    KC_NO, \
    KC_NO, KC_F1, KC_F2,  KC_F3,   KC_F4,    KC_NO,		KC_NLCK, KC_1,    KC_2,    KC_3, KC_TRNS, KC_NO, \
    KC_NO, KC_NO, KC_NO,  KC_LGUI, KC_LCTRL, KC_NO,		KC_LSFT, KC_LALT, KC_RGUI, KC_NO, KC_NO,  KC_NO \
  ),

   /* Symbols layer
    * ┌──────┬──────┬──────┬──────┬──────┬──────┐ 		┌──────┬──────┬──────┬──────┬──────┬──────┐
    * │      │  £   │  €¢  │  |   │  πΠ  │  ¬   │ 		│  ~ˇ  │  \   │  {   │  }   │  +   │      │
    * ├──────┼──────┼──────┼──────┼──────┼──────┤ 		├──────┼──────┼──────┼──────┼──────┼──────┤
    * │      │  $   │  #   │  !   │  %   |      │ 		│  &¥  │  /   │  («  │  )»  │  =   │      │
    * ├──────┼──────┼──────┼──────┼──────┼──────┤ 		├──────┼──────┼──────┼──────┼──────┼──────┤
    * │      │  ¤   │  ß   │  §   │  @   |      │ 		│  `   │   ´  │  [   │  ]   │  –—  │      │
    * ├──────┼──────┼──────┼──────┼──────┼──────┤ 		├──────┼──────┼──────┼──────┼──────┼──────┤
    * │      |      │      │      |      │      │ 		| SHIFT│ RALT │      │      │      │      │
    * └──────┴──────┴──────┴──────┴──────┴──────┘ 		└──────┴──────┴──────┴──────┴──────┴──────┘
    */
  [SYM] = LAYOUT_ortho_4x12( \
     KC_NO, PND,   EURO,    PIPE,    PI,      KC_NO,		TILD,    BSLSH,   LCBR,    RCBR,  PLUS,  KC_NO, \
     KC_NO, DLR,   KC_HASH, KC_EXLM, KC_PERC, KC_NO,		AMPR,    SLSH,    LPRN,    RPRN,  EQL,   KC_NO, \
     KC_NO, CURR,  SS,      PARAG,   AT,      KC_NO,		GRV,     SGRV,    LBRC,    RBRC,  LMINS, KC_NO, \
     KC_NO, KC_NO, KC_NO,   KC_LGUI, KC_LCTL, KC_TRNS,		KC_LSFT, KC_RALT, KC_RGUI, KC_NO, KC_NO, KC_NO \
  ), 

   /* Navigation layer
    * ┌──────┬──────┬──────┬──────┬──────┬──────┐ 			┌──────┬──────┬──────┬──────┬──────┬──────┐
    * │      │ home │pgdown│ pgup │  end │      │ 			│      │ home │pgdown│ pgup │  end │      │
    * ├──────┼──────┼──────┼──────┼──────┼──────┤ 			├──────┼──────┼──────┼──────┼──────┼──────┤
    * │      │ left │ down │  up  │ right│      │ 			│      | left | down |  up  │ right│      │
    * ├──────┼──────┼──────┼──────┼──────┼──────┤ 			├──────┼──────┼──────┼──────┼──────┼──────┤
    * │      │      │      │      │      │      │ 			│      │      │      │      │      │      │
    * ├──────┼──────┼──────┼──────┼──────┼──────┤ 			├──────┼──────┼──────┼──────┼──────┼──────┤
    * │      |      │      │      |      │      │ 			|      │      │      │      │      │      │
    * └──────┴──────┴──────┴──────┴──────┴──────┘	 		└──────┴──────┴──────┴──────┴──────┴──────┘
    */
  [NAV] = LAYOUT_ortho_4x12( \
	KC_NO, KC_HOME, KC_PGDN,  KC_PGUP,  KC_END,    KC_NO,  		KC_NO,   KC_HOME, KC_PGDN, KC_PGUP, KC_END,   KC_NO, \
	KC_NO, KC_LEFT, KC_DOWN,  KC_UP,    KC_RIGHT,  KC_NO,  		KC_NO,   KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, KC_NO, \
	KC_NO, KC_NO,   KC_NO,    KC_NO,    KC_NO,     KC_NO,		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO, \
        KC_NO, KC_NO,   KC_NO,    KC_LGUI,  KC_LCTL,   KC_NO,           KC_LSFT, KC_RALT, KC_RGUI,   KC_NO,   KC_NO,    KC_NO  \
)
};

