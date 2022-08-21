#include QMK_KEYBOARD_H
#include <stdio.h>

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3(
      //,-----------------------------------------------------------------.           LAYER #0           ,-----------------------------------------------------------------.
           KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                   KC_Y,   KC_U,     KC_I,    KC_O,    KC_P, KC_BSPC,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
          KC_LSFT,    KC_A,   KC_S,     KC_D,    KC_F,    KC_G,                                   KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
          KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                   KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,   MO(5),
      //|----------+----------+----------+----------+----------+----------+----------|        |----------+----------+----------+----------+----------+----------+----------|
                                                      KC_LGUI,   MO(1),  KC_SPC,           KC_ENT,LT(2,KC_ENT),KC_LALT
                                                  //`--------------------------------'        `--------------------------------'
  ),
  [1] = LAYOUT_split_3x6_3(
      //,-----------------------------------------------------------------.           LAYER #1           ,-----------------------------------------------------------------.
           KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                   KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
          KC_LSFT,   KC_NO,   KC_NO,   KC_NO,   MO(4),   KC_NO,                                  KC_NO,   KC_UP,   KC_NO, KC_LBRC, KC_RBRC,   KC_NO,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
          KC_LCTL,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                KC_LEFT, KC_DOWN, KC_RGHT,   KC_NO,   KC_NO,   KC_NO,
      //|----------+----------+----------+----------+----------+----------+----------|        |----------+----------+----------+----------+----------+----------+----------|
                                                      KC_LGUI, KC_TRNS,  KC_SPC,           KC_ENT,   MO(3),  KC_LALT
                                                  //`--------------------------------'        `--------------------------------'
  ),
  [2] = LAYOUT_split_3x6_3(
      //,-----------------------------------------------------------------.           LAYER #2           ,-----------------------------------------------------------------.
           KC_ESC, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                                KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
          KC_LSFT,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                KC_MINS,  KC_EQL,   KC_NO,   KC_NO, KC_BSLS,  KC_GRV,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
          KC_LCTL,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_TILD,
      //|----------+----------+----------+----------+----------+----------+----------|        |----------+----------+----------+----------+----------+----------+----------|
                                                      KC_LGUI,   MO(3),  KC_SPC,           KC_ENT, KC_TRNS, KC_LALT
                                                  //`--------------------------------'        `--------------------------------'
  ),
  [3] = LAYOUT_split_3x6_3(
      //,-----------------------------------------------------------------.           LAYER #3           ,-----------------------------------------------------------------.
          QK_BOOT,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                  KC_NO,   KC_NO,   KC_NO, KC_MPRV, KC_MNXT, KC_MPLY,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
          RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI,   KC_NO,   KC_NO,                                  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_VOLU,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
          RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD,   KC_NO,   KC_NO,                                  KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_MUTE, KC_VOLD,
      //|----------+----------+----------+----------+----------+----------+----------|        |----------+----------+----------+----------+----------+----------+----------|
                                                      KC_LGUI, KC_TRNS,  KC_SPC,           KC_ENT, KC_TRNS, KC_LALT
                                                  //`--------------------------------'        `--------------------------------'
  ),
  [4] = LAYOUT_split_3x6_3(
      //,-----------------------------------------------------------------.           LAYER #4           ,-----------------------------------------------------------------.
            KC_NO,   KC_NO,   KC_F2,   KC_NO,   KC_F4,   KC_NO,                                   KC_7,    KC_8,    KC_9,   KC_NO,   KC_NO,  KC_F12,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
            KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_TRNS,   KC_NO,                                   KC_4,    KC_5,    KC_6,   KC_NO,   KC_NO,   KC_NO,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
            TG(6),   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                   KC_1,    KC_2,    KC_3,    KC_0,   KC_NO,   KC_NO,
      //|----------+----------+----------+----------+----------+----------+----------|        |----------+----------+----------+----------+----------+----------+----------|
                                                      KC_LGUI, KC_TRNS,  KC_SPC,           KC_ENT, KC_TRNS, KC_LALT
                                                  //`--------------------------------'        `--------------------------------'
  ),
  [5] = LAYOUT_split_3x6_3(
      //,-----------------------------------------------------------------.           LAYER #5           ,-----------------------------------------------------------------.
            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                  KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_WH_D, KC_MPLY,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                  KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_WH_U,   KC_NO,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_TRNS,
      //|----------+----------+----------+----------+----------+----------+----------|        |----------+----------+----------+----------+----------+----------+----------|
                                                      KC_LGUI, KC_TRNS,  KC_SPC,           KC_ENT, KC_TRNS, KC_LALT
                                                  //`--------------------------------'        `--------------------------------'
  ),
  [6] = LAYOUT_split_3x6_3(
      //,-----------------------------------------------------------------.           LAYER #6           ,-----------------------------------------------------------------.
           KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
          KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
          KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_M,                                  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
      //|----------+----------+----------+----------+----------+----------+----------|        |----------+----------+----------+----------+----------+----------+----------|
                                                        MO(7),  KC_SPC,  KC_ENT,            KC_NO,   KC_NO,   KC_NO
                                                  //`--------------------------------'        `--------------------------------'
  ),
  [7] = LAYOUT_split_3x6_3(
      //,-----------------------------------------------------------------.           LAYER #7           ,-----------------------------------------------------------------.
           KC_TAB,   KC_NO,   KC_UP,   KC_NO,   KC_NO,   TG(6),                                  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
           KC_TAB, KC_LEFT, KC_DOWN, KC_RGHT,   KC_NO,   KC_NO,                                  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
      //|----------+----------+----------+----------+----------+----------|                              |----------+----------+----------+----------+----------+----------|
            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
      //|----------+----------+----------+----------+----------+----------+----------|        |----------+----------+----------+----------+----------+----------+----------|
                                                      KC_TRNS,   KC_NO,   KC_NO,            KC_NO,   KC_NO,   KC_NO
                                                  //`--------------------------------'        `--------------------------------'
  ),
};

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

#define L_BASE 0
#define L_LOWER 2
#define L_RAISE 4
#define L_ADJUST 8
#define L_NUMS 16
#define L_LAG 32
#define L_GAMING 64
#define L_GAMING_TWO 128

void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (layer_state) {
        case L_BASE:
            oled_write_ln_P(PSTR("Default"), false);
            break;
        case L_LOWER:
            oled_write_ln_P(PSTR("Lower"), false);
            break;
        case L_RAISE:
            oled_write_ln_P(PSTR("Raise"), false);
            break;
        case L_ADJUST:
        case L_ADJUST|L_LOWER:
        case L_ADJUST|L_RAISE:
        case L_ADJUST|L_LOWER|L_RAISE:
            oled_write_ln_P(PSTR("Adjust"), false);
            break;
        case L_NUMS:
        case L_NUMS|L_LOWER:
            oled_write_ln_P(PSTR("Nums"), false);
            break;
        case L_LAG:
        case L_GAMING:
        case L_GAMING|L_GAMING_TWO:
            oled_write_ln_P(PSTR("LAG"), false);
            break;
    }
}


char keylog_str[24] = {};

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
  char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) { keycode = keycode & 0xFF; }
  if (keycode < 60) {
    name = code_to_name[keycode];
  }

  // update keylog
  snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
           record->event.key.row, record->event.key.col,
           keycode, name);
}

void oled_render_keylog(void) {
    oled_write(keylog_str, false);
}

void render_bootmagic_status(bool status) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
        oled_render_keylog();
    } else {
        oled_render_logo();
    }
    return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    set_keylog(keycode, record);
  }
  return true;
}
#endif // OLED_ENABLE
