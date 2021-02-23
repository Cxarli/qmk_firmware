#include QMK_KEYBOARD_H

enum ctrl_keycodes {
    U_T_AUTO = SAFE_RANGE,  // USB Extra Port Toggle Auto Detect / Always Active
    U_T_AGCR,               // USB Toggle Automatic GCR control
    DBG_TOG,                // DEBUG Toggle On / Off
    DBG_MTRX,               // DEBUG Toggle Matrix Prints
    DBG_KBD,                // DEBUG Toggle Keyboard Prints
    DBG_MOU,                // DEBUG Toggle Mouse Prints
    MD_BOOT,                // Restart into bootloader after hold timeout

    MY_RGBT,
};

enum layers {
    DV = 0,  // dvorak
    QW,      // qwerty
    FN,      // right fn

    N_layers,
};

#define WHITE {RGB_WHITE}
#define RED {RGB_RED}
#define CORAL {RGB_CORAL}
#define ORANGE {RGB_ORANGE}
#define GOLDEN {RGB_GOLDENROD}
#define GOLD {RGB_GOLD}
#define YELLOW {RGB_YELLOW}
#define CHARTREUSE {RGB_CHARTREUSE}
#define GREEN {RGB_GREEN}
#define SPRING {RGB_SPRINGGREEN}
#define TURQUOISE {RGB_TURQUOISE}
#define TEAL {RGB_TEAL}
#define CYAN {RGB_CYAN}
#define AZURE {RGB_AZURE}
#define BLUE {RGB_BLUE}
#define PURPLE {RGB_PURPLE}
#define MAGENTA {RGB_MAGENTA}
#define PINK {RGB_PINK}
#define BLACK {RGB_BLACK}
