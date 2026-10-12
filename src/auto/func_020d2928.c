#include "m2c.h"

s32 func_020d2928(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x40) != 0x3EB) {
        return 1;
    }
    return 0;
}
