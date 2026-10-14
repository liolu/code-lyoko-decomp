#include "m2c.h"

s32 func_020448b8(s32, M2C_UNK, M2C_UNK, s32);      /* extern */
s32 func_02047508();                                /* extern */
M2C_UNK func_0204754c(s32 *, s32, s32, M2C_UNK);    /* extern */

void func_02047430(s32 *arg0, void *arg1) {
    s32 temp_r0;

    temp_r0                      = func_02047508();
    M2C_FIELD(arg1, s32 *, 0xC)  = func_020448b8(*arg0, 0, 0, temp_r0 * 4);
    M2C_FIELD(arg1, s32 *, 0x2C) = temp_r0;
    func_0204754c(arg0, M2C_FIELD(arg1, s32 *, 0xC), temp_r0, 4);
}
