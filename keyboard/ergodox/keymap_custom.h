static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: QWERTY
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |   =    |   1  |   2  |   3  |   4  |   5  |  ESC |           |   \  |   6  |   7  |   8  |   9  |   0  |   -    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |   TAB  |   Q  |   W  |   E  |   R  |   T  |   [  |           |   ]  |   Y  |   U  |   I  |   O  |   P  |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | Lshift |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
     * |--------+------+------+------+------+------|Lshift|           |Rshift|------+------+------+------+------+--------|
     * |   ~L1  |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  |   L1   |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | LGui |   `  | Enter| LCtl | Lalt |                                       | Left | Down |  Up  | Right|  Ins |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | PgUp | PgDn |       |      | Ralt |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | Home |       | PgUp |      |      |
     *                                 | BkSp | Del  |------|       |------| Enter| Space|
     *                                 |      |      |  End |       | PgDn |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP( // Layer 0: Qwerty
        // Left Hand
        EQL, 1,   2,   3,   4,   5,   ESC,
        TAB, Q,   W,   E,   R,   T,   LBRC,
        LSFT,A,   S,   D,   F,   G,
        FN2, Z,   X,   C,   V,   B,   LSFT,
        LGUI,GRV, ENT, LCTL,LALT,
                                      PGUP,PGDN,
                                           HOME,
                                  BSPC,DEL, END,
        // Right Hand
            BSLS,  6,   7,   8,   9,   0,   MINS,
            RBRC, Y,   U,   I,   O,   P,   NO,
                  H,   J,   K,   L,   SCLN,   QUOT,
            RSFT, N,   M,   COMM,DOT, SLSH,   FN0,
                       LEFT,DOWN, UP, RGHT,   INS,
        NO, RALT,
        PGUP,
        PGDN, ENT, SPC
    ),

    /* Layer 1: Function and Media Keys
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |   F11  |  F1  |  F2  |  F3  |  F4  |  F5  |      |           |      |  F6  |  F7  |  F8  |  F9  |  F10 |   F12  |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | TRNS   |      |      |      |      |      | ~L2  |           |      |      |      |      |      |      |  PrtSc |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | TRNS   |      |      |      |      |      |------|           |------|      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | TRNS   |      |      |      |      |      | TRNS |           | TRNS |      |      | Mute | Play |      |    TRNS|
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      | TRNS | TRNS |                                       |Prev.T|VolDn |VolUp |Next T|      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | TRNS | TRNS |       | TRNS | TRNS |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | TRNS |       | TRNS |      |      |
     *                                 | TRNS | TRNS |------|       |------| TRNS | TRNS |
     *                                 |      |      | TRNS |       | TRNS |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP( // Layer 1: Function and Media Keys
        // Left Hand
         F11, F1,  F2,  F3,  F4,  F5,  NO,
         TRNS, NO,  NO,  NO,  NO,  NO,   FN3,
         TRNS, NO,  NO,  NO,  NO,  NO,
         TRNS, NO,  NO,  NO,  NO,  NO,  TRNS,
         NO, NO,  NO,  TRNS, TRNS,
                                      TRNS, TRNS,
                                            TRNS,
                                TRNS, TRNS, TRNS,
        // Right Hand
             NO,  F6,  F7,  F8,  F9,  F10, F12,
             NO,  NO,  NO,  NO,  NO,  NO,  PSCR,
                  NO,  NO,  NO,  NO,  NO,  NO,
             TRNS,NO,  MUTE,MPLY,NO,  NO,  TRNS,
                       MPRV,VOLD,VOLU,MNXT,NO,
        TRNS, TRNS,
        TRNS,
        TRNS, TRNS, TRNS
    ),

    /* Layer 2: Bridge to special
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |      |      |      |      |      |  ~L3 |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |------|           |------|      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------|      |      |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP( // Layer 2: Bridge to special
        // Left Hand
         NO, NO,  NO,  NO,  NO,  NO,  FN4,
         NO, NO,  NO,  NO,  NO,  NO,  NO,
         NO, NO,  NO,  NO,  NO,  NO,
         NO, NO,  NO,  NO,  NO,  NO,  NO,
         NO, NO,  NO,  NO,  NO,
                                      NO, NO,
                                          NO,
                                  NO, NO, NO,
        // Right Hand
             NO,  NO,  NO,  NO,  NO,  NO, NO,
             NO,  NO,  NO,  NO,  NO,  NO, NO,
                  NO,  NO,  NO,  NO,  NO, NO,
             NO,  NO,  NO,  NO,  NO,  NO, NO,
                  NO,  NO,  NO,  NO,  NO,
         NO, NO,
         NO,
         NO, NO, NO
    ),

    /* Layer 3: Special
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |      |      |      |      |      |      |           |Teensy|      |      |      |      |      |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |------|           |------|      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------|      |      |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP( // Layer 3: Special
        // Left Hand
         NO, NO,  NO,  NO,  NO,  NO,  NO,
         NO, NO,  NO,  NO,  NO,  NO,  NO,
         NO, NO,  NO,  NO,  NO,  NO,
         NO, NO,  NO,  NO,  NO,  NO,  NO,
         NO, NO,  NO,  NO,  NO,
                                      NO, NO,
                                          NO,
                                  NO, NO, NO,
        // Right Hand
             FN6,  NO,  NO,  NO,  NO,  NO, NO,
             NO,  NO,  NO,  NO,  NO,  NO, NO,
                  NO,  NO,  NO,  NO,  NO, NO,
             NO,  NO,  NO,  NO,  NO,  NO, NO,
                  NO,  NO,  NO,  NO,  NO,
         NO, NO,
         NO,
         NO, NO, NO
    ),
};

/* id for user defined functions */
enum function_id {
    TEENSY_KEY,
};

static const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_INVERT(1, ON_PRESS),                	// FN0  - Switch layer state between 1 to current
    [1] = ACTION_LAYER_INVERT(2, ON_PRESS),                	// FN1  - Switch layer state between 2 to current
    [2] = ACTION_LAYER_MOMENTARY(1),                       	// FN2  - Switching to layer 1 while holding key
    [3] = ACTION_LAYER_MOMENTARY(2),                       	// FN2  - Switching to layer 2 while holding key
    [4] = ACTION_LAYER_MOMENTARY(3),                       	// FN6  - Switching to layer 3 while holding key
    [5] = ACTION_LAYER_MOMENTARY(4),                       	// FN7  - Switching to layer 4 while holding key
    
    [6] = ACTION_FUNCTION(TEENSY_KEY),                     	// FN5  - Teensy key
};


bool layer_origin_colemak = false;

void action_function(keyrecord_t *event, uint8_t id, uint8_t opt)
{
    print("action_function called\n");
    print("id  = "); phex(id); print("\n");
    print("opt = "); phex(opt); print("\n");

  switch(id) {
    case TEENSY_KEY:
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(250);
        bootloader_jump(); // should not return
        print("not supported.\n");
		break;
  }
}

