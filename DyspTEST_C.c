#include <stdlib.h>
#include "lib/e-Paper/EPD_1in54b_V2.h"
#include "DEV_Config.h"

// Main Func
int main(void) {
    // Initialize module
    if (DEV_Module_Init() != 0) {
        return -1;
    }

    // Initialization
    EPD_1IN54B_V2_Init();

    // Refresh The screen
    EPD_1IN54B_V2_Clear();

    // Put the display to sleep
    EPD_1IN54B_V2_Sleep();

    // Clean up module
    DEV_Module_Exit();

    return 0;
}