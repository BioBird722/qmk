#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _NUM,
    _FN,
    _MEDIA
};

// Layer toggle keys
#define L_NUM   MO(_NUM)
#define L_FN    MO(_FN)
#define L_MED   MO(_MEDIA)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT_split_3x6_3(
    KC_TAB,    KC_Q,   KC_W,    KC_E,   jKC_R,   KC_T,     KC_Y,     KC_U,    KC_I,      KC_O,     KC_P,      KC_BSPC,
    KC_LCTL,   KC_A,   KC_S,    KC_D,   jKC_F,   KC_G,     KC_H,     KC_J,    KC_K,      KC_L,     KC_SCLN,   KC_QUOT,
    KC_LSFT,   KC_Z,   KC_X,    KC_C,   jKC_V,   KC_B,     KC_N,     KC_M,    KC_COMM,   KC_DOT,   KC_SLSH,   KC_RSFT,
                             KC_LALT,   L_NUM, KC_SPC,     KC_ENT,   KC_NO,   L_FN
),

[_NUM] = LAYOUT_split_3x6_3(
    KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5,      KC_GRV, KC_TILD, KC_CIRC, KC_PIPE, KC_BSLS, KC_BSPC,
    KC_LCTL, KC_6, KC_7, KC_8, KC_9, KC_0,     KC_LBRC, KC_LCBR, KC_LPRN, KC_RPRN, KC_RCBR, KC_RBRC,
    KC_CAPS, KC_ASTR, KC_PLUS, KC_MINS, KC_EQL, KC_DOT,   KC_APP, KC_PAUS, KC_NO, KC_NO, KC_NO, KC_RSFT,
                    KC_LALT, KC_TRNS, L_NUM,     KC_ENT, KC_NO, L_FN
),

[_FN] = LAYOUT_split_3x6_3(
    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_NO,   KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_DEL,
    KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_NO,  KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_AMPR,
    KC_PSCR, KC_SLCK, KC_INS, KC_F11, KC_F12, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_CAPS,
                    KC_LALT, KC_TRNS, L_FN,     KC_NO, KC_NO, L_MED
),

[_MEDIA] = LAYOUT_split_3x6_3(
    KC_NO, KC_MNXT, KC_MPLY, KC_VOLD, KC_VOLU, KC_MPRV,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RESET,
    KC_NO, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_ENT,      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_DEL,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                    KC_LALT, KC_TRNS, L_MED,     KC_NO, KC_NO, KC_TRNS
)

};
