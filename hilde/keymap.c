#include QMK_KEYBOARD_H
/*#ifdef PROTOCOL_LUFA
  #include "lufa.h"
  #include "split_util.h"
#endif
*/
#include "norwegian.h"

extern uint8_t is_master;

#define BASE 0
#define NUM 1
#define SYM 2

// MOD-tap definitions
#define FNBS LT(SYM, KC_BSPC)



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* BASE
 * ,-----------------------------------------.                    ,-----------------------------------------.
   |  F1  |  F2  |  F3  |  F4  |   F5 |  F6  |                    |   F7 |   F8 |   F9 | F10  | F11  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  Q   |   Å  |   Y  |   F  |   B  |   G  |                    |   J  |   L  |   Æ  |   U  |   Ø  |  =   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   A  |   R  |   S  |   T  |   D  |-------.    ,-------|   H  |   N  |   E  |   I  |   O  |  "   |
 * |------+------+------+------+------+------|  ENTR |    |   "   |------+------+------+------+------+------|
 * |  W   |   Z  |   X  |   C  |   V  |   K  |-------|    |-------|   P  |   M  |   ,; |   .: |   -_ |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | SHFT | LGUI |  NUM | / TAB   /       \ FN   \  | LALT | DEL  | INS  |
 *                   |      |      |      |/ SHFT  /         \  BSPC\ | SPC  |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [BASE] = LAYOUT( \
  KC_F1,    KC_F2,  KC_F3,   KC_F4,   KC_F5,   KC_F6,                        KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, \
  KC_Q,     AA,     KC_Y,    KC_F,    KC_B,    KC_G,                         KC_J,    KC_L,    AE,      KC_U,    OE,      EQL, \
  KC_ESC,   KC_A,   KC_R,    KC_S,    KC_T,    KC_D,                         KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    DQT, \
  KC_W,     KC_Z,   KC_X,    KC_C,    KC_V,    KC_K,    KC_ENT,        DQT,  KC_P,    KC_M,    KC_COMM, KC_DOT,  MINS,    KC_NO, \
                             KC_LSFT, KC_LGUI, MO(NUM), SFT_T(KC_TAB), FNBS, ALT_T(KC_SPC),    KC_DEL,  KC_INS \
),

/* NUM
 * ,-----------------------------------------.                    ,-----------------------------------------.
   |      |      |      |      |      |      |                    |      |   7  |   8  |  9   |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      | HOME |PGDOWN| PGUP |  END |      |                    |      |   4  |   5  |  6   |  0   |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      | LEFT | DOWN |  UP  | RIGHT|      |-------.    ,-------|      |   1  |   2  |  3   |      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | SHFT | LGUI |      | /       /       \      \  | LALT |      |      |
 *                   |      |      |      |/ SHFT  /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [NUM] = LAYOUT( \
  KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,                      KC_NO,   KC_7,    KC_8,    KC_9,    KC_NO,    KC_NO, \
  KC_NO,    KC_HOME, KC_PGDN, KC_PGUP, KC_END,   KC_NO,                      KC_NO,   KC_4,    KC_5,    KC_6,    KC_NO,    KC_NO, \
  KC_ESC,   KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, KC_NO,                      KC_NO,   KC_1,    KC_2,    KC_3,    KC_NO,    KC_NO, \
  KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_ENT,   DQT,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO, \
                              KC_LSFT, KC_LGUI,  KC_NO,    KC_LSFT,  KC_NO,  KC_LALT, KC_NO,   KC_NO \
),
/* SYM
 * ,-----------------------------------------.                  		  ,-----------------------------------------.
   |  !   |   @  |   #  |  $   |  %   |  ^   |                  		  |   &  |   *  |  (   |   )  |   /  |      |
 * |------+------+------+------+------+------|                  		  |------+------+------+------+------+------|
 * |  |§  |      |      |  €¢  |      |  ~ˇ  |                 			  |      |      |  [«  |   ]» |   ?  |  +   |
 * |------+------+------+------+------+------|                  		  |------+------+------+------+------+------|
 * |  §   |      |      |  £   |      |  ¨^  |-------.  		  ,-------|      |      |  {   |  }   |      |  '*  |
 * |------+------+------+------+------+------|       |  		  |   '   |------+------+------+------+------+------|
 * |      |      |      |  ¤   |  `   |  ´¬  |-------|  		  |-------|      |      |  <   |  >   |  –—  |      |
 * `-----------------------------------------/       /  		   \      \-----------------------------------------'
 *                   | SHFT | LGUI |      | /       /   		    \      \  | LALT |      |      |
 *                   |      |      |      |/ SHFT  /    		     \      \ |      |      |      |
 *                   `----------------------------'     		      '------''--------------------'
 */

 [SYM] = LAYOUT( \
  KC_EXLM,    AT,      KC_HASH, DLR,     KC_PERC,  LSFT(TOED),                  AMPR,    LSFT(QUOT), LPRN,    RPRN,    SLSH,     KC_NO, \
  PIPE,       KC_NO,   KC_NO,   EURO,    KC_NO,    TILD,                        KC_NO,   KC_NO,      LBRC,    RBRC,    QUEST,    PLUS, \
  LSFT(PIPE), KC_NO,   KC_NO,   PND,     KC_NO,    TOED,                        KC_NO,   KC_NO,      LCBR,    RCBR,    KC_NO,    QUOT, \
  KC_NO,      KC_NO,   KC_NO,   CURR,    GRV,      SGRV,      KC_ENT,   DQT,    KC_NO,   KC_NO,      KC_NO,   KC_NO,   LMINS,    KC_NO, \
                                KC_LSFT, KC_LGUI,  KC_NO,     KC_LSFT,  KC_NO,  KC_LALT, KC_NO,      KC_NO \
),
};
