#include "m2c.h"

s32 func_0203f568();                                /* extern */
s32 func_020401f4(M2C_UNK, M2C_UNK);                /* extern */

s32 func_020401c0(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    s32 var_r4;

    var_r4 = arg2;
    if (func_0203f568() > 0) {
        var_r4 = func_020401f4(arg0, arg1);
    }
    return var_r4;
}
