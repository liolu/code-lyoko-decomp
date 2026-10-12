#include "m2c.h"

extern void *data_020fd4cc;

void func_0203ad5c(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(data_020fd4cc, s32 *, 0x84) + (arg0 * 0x10)), s32 *, 0x14) = arg1;
}
