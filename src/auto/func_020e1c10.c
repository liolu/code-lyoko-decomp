#include "m2c.h"

s32 func_02063358(M2C_UNK);                         /* extern */
M2C_UNK func_020e1c34(s32, M2C_UNK);                /* extern */

void func_020e1c10(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r0;

    temp_r0 = func_02063358(4);
    if (temp_r0 == 0) {
        return;
    }
    func_020e1c34(temp_r0, arg2);
}
