#include "m2c.h"

s32 func_02072810(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0xE68) != 3) && (M2C_FIELD(arg0, s32 *, 0xE64) == 1)) {
        return 1;
    }
    return 0;
}
