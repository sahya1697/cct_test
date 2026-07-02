#include "shared.h"

void reset_device(void) {
    asm("NOP"); asm("NOP");
    return; }
