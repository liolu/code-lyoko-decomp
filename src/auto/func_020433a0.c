/* compiler: 2.0/sp1p5 -flag no-opt_common_subs */
#include "m2c.h"

M2C_UNK func_020433ec(void *, s32);                 /* extern */
s32 func_020448b8(void *, s32, s32, s32);           /* extern */

void func_020433a0(void *arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4                      = M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x1C) = func_020448b8(arg0, temp_r4, M2C_FIELD(arg0, s32 *, 0x20) * 8, arg1 * 8);
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) ((M2C_FIELD(arg0, s32 *, 0x1C) + (arg1 * 8)) - 0x30);
    func_020433ec(arg0, temp_r4);
}
