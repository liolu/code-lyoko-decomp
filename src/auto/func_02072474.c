#include "m2c.h"

s32 func_020725a4(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02072618(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

s32 func_02072474(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (func_020725a4(arg0, arg2) == 0) {
        return 0;
    }
    return func_02072618(arg0, arg1, arg2);
}
