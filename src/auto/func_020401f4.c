#include "m2c.h"

s32 func_0203f3a0();                                /* extern */
s32 func_0203f4b0(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02040460(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

s32 func_020401f4(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0 = func_0203f3a0();
    if ((temp_r0 == 0) && (func_0203f4b0(arg0, arg1) == 0)) {
        func_02040460(arg0, arg1, 3);
    }
    return temp_r0;
}
