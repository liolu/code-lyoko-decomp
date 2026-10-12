#include "m2c.h"

s32 func_02070078(M2C_UNK, M2C_UNK);                /* extern */
s32 func_020700ec(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

s32 func_0206fbbc(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (func_02070078(arg0, arg2) == 0) {
        return 0;
    }
    return func_020700ec(arg0, arg1, arg2);
}
