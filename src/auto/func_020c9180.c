#include "m2c.h"

s32 func_020878e0(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02087a48();                                /* extern */

void func_020c9180(M2C_UNK arg0, M2C_UNK arg1, s32 *arg2) {
    if (func_02087a48() == 0) {
        return;
    }
    *arg2 = func_020878e0(arg0, arg1);
}
