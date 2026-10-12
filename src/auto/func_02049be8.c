#include "m2c.h"

M2C_UNK func_0203f10c(M2C_UNK, s32);                /* extern */
s32 func_020401f4(M2C_UNK, M2C_UNK);                /* extern */

s32 func_02049be8(M2C_UNK arg0) {
    s32 var_r1;

    var_r1 = func_020401f4(arg0, 1);
    if (var_r1 < 0) {
        var_r1 = 0 - var_r1;
    }
    func_0203f10c(arg0, var_r1);
    return 1;
}
