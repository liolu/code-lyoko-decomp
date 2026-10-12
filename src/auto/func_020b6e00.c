#include "m2c.h"

s32 func_020b6e00(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 4) * 0x38) + M2C_FIELD(arg0, s32 *, 0);
}
