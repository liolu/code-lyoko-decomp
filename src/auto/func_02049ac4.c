#include "m2c.h"

s32 func_02004760();                                /* extern */
M2C_UNK func_0203f10c(M2C_UNK, s32);                /* extern */
M2C_UNK func_020401f4(M2C_UNK, M2C_UNK);            /* extern */

s32 func_02049ac4(M2C_UNK arg0) {
    func_020401f4(arg0, 1);
    func_0203f10c(arg0, func_02004760());
    return 1;
}
