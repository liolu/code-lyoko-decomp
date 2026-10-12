#include "m2c.h"

s32 func_0203f3a0(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0203f4b0(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0203f68c(M2C_UNK, s32);                /* extern */

s32 func_0203ff74(M2C_UNK arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = func_0203f3a0(arg0, -1);
    if ((var_r4 == 0) && (func_0203f4b0(arg0, -1) == 0)) {
        var_r4 = -1;
    }
    func_0203f68c(arg0, -1 - arg1);
    return var_r4;
}
