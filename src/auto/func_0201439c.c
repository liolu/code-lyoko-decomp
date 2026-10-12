#include "m2c.h"

extern u16 data_020f6e68;

s32 func_0201439c(void) {
    if (data_020f6e68 != 0) {
        return 0;
    }
    return 3;
}
