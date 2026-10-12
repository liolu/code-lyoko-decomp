#include "m2c.h"

s32 func_02063358(M2C_UNK);                         /* extern */
M2C_UNK func_020663d0(s32, M2C_UNK);                /* extern */

void func_020663ac(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r0;

    temp_r0 = func_02063358(0x40);
    if (temp_r0 == 0) {
        return;
    }
    func_020663d0(temp_r0, arg2);
}
