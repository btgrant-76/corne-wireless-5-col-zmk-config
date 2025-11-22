// hold-trigger-key-positions configs https://zmk.dev/docs/keymaps/behaviors/hold-tap?examples=home_row_mods#positional-hold-tap-and-hold-trigger-key-positions
#define KEYS_L 0 1 2 3 4  10 11 12 13 14  20 21 22 23 24
#define KEYS_R 5 6 7 8 9  15 16 17 18 19  25 26 27 28 29
#define THUMBS 30 31      32 33 // STM Chiffre encoder is at 34
//#define THUMBS 30 31      33 34 // jlwffre encoder is at 32

// Home row mods macro
#define HRML(k1,k2,k3,k4) &hrml LCTRL k1  &hrml LALT k2  &hrml LGUI k3  &sftl LSHFT k4
#define HRMR(k1,k2,k3,k4) &sftr RSHFT k1  &hrmr RGUI k2  &hrmr LALT k3  &hrmr RCTRL k4

#define BACK &kp LG(LBKT)
#define FWD &kp LG(RBKT)
#define MISS_CTL &kp LC(UP)

/* base */
#define Z_HYPR &ht LC(LA(LG(LSHFT))) Z
#define SLS_HYPR &ht LC(LA(LG(LSHFT))) FSLH
#define B_MEH &ht LC(LA(LSHFT)) B
#define N_MEH &ht LC(LA(LSHFT)) N

/* macros */
#define UNDO_  &kp LG(Z)
#define CUT_   &kp LG(X)
#define COPY_  &kp LG(C)
#define PASTE_ &kp LG(V)
#define REDO_  &kp LS(LG(Z))

#define TAB_LFT &kp LS(LG(LBKT))
#define TAB_RGT &kp LS(LG(RBKT))
