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

// ModTap decleration
#define MEH_SPC MT(MOD_MEH,KC_SPACE)
#define LALT_D  MT(MOD_LALT,KC_D)
#define LGUI_F  MT(MOD_LGUI,KC_F)
#define RGUI_J  MT(MOD_RGUI,KC_J)
#define RALT_K  MT(MOD_RALT,KC_K)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT_split_3x6_3(
    KC_ESC,  KC_Q,    KC_W,    KC_E,     KC_R,     KC_T,       KC_Y,     KC_U,    KC_I,      KC_O,     KC_P,      KC_BSPC,
    KC_TAB,  KC_A,    KC_S,    LALT_D,   LGUI_F,   KC_G,       KC_H,     RGUI_J,  RALT_K,    KC_L,     KC_SCLN,   KC_QUOT,
    KC_LCTL, KC_Z,    KC_X,    KC_C,     KC_V,     KC_B,       KC_N,     KC_M,    KC_COMM,   KC_DOT,   KC_SLSH,   KC_RSFT,
                               KC_LSFT,  L_NUM,    MEH_SPC,    KC_ENT,   L_FN,    KC_RGUI
),

[_NUM] = LAYOUT_split_3x6_3(
    KC_ESC,  KC_1,    KC_2,    KC_3,     KC_4,     KC_5,       KC_GRV,   KC_TILD, KC_CIRC,  KC_PIPE,  KC_BSLS,  KC_BSPC,
    KC_LCTL, KC_6,    KC_7,    KC_8,     KC_9,     KC_0,       KC_LBRC,  KC_LCBR, KC_LPRN,  KC_RPRN,  KC_RCBR,  KC_RBRC,
    KC_CAPS, KC_ASTR, KC_PLUS, KC_MINS,  KC_EQL,   KC_DOT,     KC_APP,   KC_PAUS, KC_NO,    KC_NO,    KC_NO,    KC_RSFT,
                               KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_ENT,   L_MED,   KC_TRNS
),

[_FN] = LAYOUT_split_3x6_3(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,    KC_F5,    KC_NO,      KC_EXLM,  KC_AT,   KC_HASH,  KC_DLR,   KC_PERC,  KC_DEL,
    KC_LCTL, KC_F6,   KC_F7,   KC_F8,    KC_F9,    KC_F10,     KC_UNDS,  KC_LEFT, KC_DOWN,  KC_UP,    KC_RGHT,  KC_AMPR,
    KC_LSFT, KC_PSCR, KC_NO,   KC_INS,   KC_F11,   KC_F12,     KC_NO,    KC_HOME, KC_PGDN,  KC_PGUP,  KC_END,   KC_CAPS,
                               KC_TRNS,  L_MED,    KC_TRNS,    KC_ENT,   KC_TRNS, KC_NO
),

[_MEDIA] = LAYOUT_split_3x6_3(
    KC_NO,   KC_VOLD, KC_VOLU, KC_MPRV,  KC_MPLY,  KC_MNXT,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,    QK_BOOT,
    KC_LCTL, KC_LEFT, KC_DOWN, KC_UP,    KC_RGHT,  KC_ENT,     KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,
    KC_LSFT, KC_HOME, KC_PGDN, KC_PGUP,  KC_END,   KC_DEL,     KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,
                               KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_NO,    KC_TRNS, KC_NO
)

};
