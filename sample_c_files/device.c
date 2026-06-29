#include "shared.h"
/* Rule 2.1 violation: assembly language not encapsulated/isolated */
void reset_device(void) {
    asm("NOP"); asm("NOP");
    return; }
