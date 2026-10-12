#include "m2c.h"

s32 func_020c8e98(void *arg0) {
    if ((M2C_FIELD(arg0, u8 *, 4) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0) <= 0)) {
        return 1;
    }
    return 0;
}
