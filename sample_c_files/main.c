#include "shared.h"
/* Rule 12.5 violation: operands of && are not primary-expressions */
int check_limits(int x, int y) {
    if (x > 0 && y < 100 && x != y) { return 1; }
    return 0; }