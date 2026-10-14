#include "m2c.h"

s32 func_0208f8e8(s32);                             /* extern */

void func_02065ce4(void *arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4                   = ((u32) (arg1 - 1) >> 5) + 1;
    M2C_FIELD(arg0, s32 *, 0) = func_0208f8e8(temp_r4 * 4);
    M2C_FIELD(arg0, s32 *, 8) = temp_r4;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}
