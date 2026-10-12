#include "m2c.h"

s32 func_0203f6fc(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg0, s32 *, 0xC);
    return (s32) (temp_r1 + ((u32) (temp_r1 >> 2) >> 0x1D)) >> 3;
}
