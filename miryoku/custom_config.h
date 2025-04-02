// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_TOTEM( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
     K00  K01  K02  K03  K04       K05  K06  K07  K08  K09 \
     K10  K11  K12  K13  K14       K15  K16  K17  K18  K19 \
K00  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  K39 \
               K32  K33  K34       K35  K36  K37

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,         &kp F,              &kp P,              &kp B,              &kp J,            &kp L,             &kp U,            &kp Y,           &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R), U_MT(LCTRL, S),     U_MT(LSHFT, T),     &kp G,              &kp K,            U_MT(LSHFT, N),    U_MT(LCTRL, E),   U_MT(LALT, I),   U_MT(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X), &kp C,              &kp D,              &kp V,              &kp M,            &kp H,             &kp COMMA,        U_MT(RALT, DOT), U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,          U_LT(U_MEDIA, ESC), U_LT(U_NAV, SPACE), U_LT(U_MOUSE, TAB), U_LT(U_SYM, RET), U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL), U_NP,            &kp SEMI

#define MIRYOKU_ALTERNATIVES_BASE_QWERTY \
&kp Q,             &kp W,         &kp E,              &kp R,              &kp T,              &kp Y,            &kp U,             &kp I,            &kp O,           &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S), U_MT(LCTRL, D),     U_MT(LSHFT, F),     &kp G,              &kp H,            U_MT(LSHFT, J),    U_MT(LCTRL, K),   U_MT(LALT, L),   U_MT(LGUI, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X), &kp C,              &kp V,              &kp B,              &kp N,            &kp M,             &kp COMMA,        U_MT(RALT, DOT), U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,          U_LT(U_MEDIA, ESC), U_LT(U_NAV, SPACE), U_LT(U_MOUSE, TAB), U_LT(U_SYM, RET), U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL), U_NP,            &kp SEMI

#define MIRYOKU_KLUDGE_THUMBCOMBOS

#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTPINKIE 1 2
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTINNERINDEX 2 3
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTINNERINDEX 6 7
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTPINKIE 7 8
#define MIRYOKU_KLUDGE_TOPROWCOMBOS

#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTPINKIE 21 22
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTINNERINDEX 22 23
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTINNERINDEX 26 27
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTPINKIE 27 28
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS

#define MIRYOKU_CLIPBOARD_MAC
