#include "m2c.h"

s32 func_0203eac0(M2C_UNK, s32, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_0203ef18(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0203f5ec(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0203f6fc(M2C_UNK);                         /* extern */
M2C_UNK func_020402f4(M2C_UNK, M2C_UNK);            /* extern */

void func_02040d5c(M2C_UNK arg0) {
    M2C_UNK var_r1;

    func_020402f4(arg0, 1);
    if (func_0203eac0(arg0, func_0203f6fc(arg0) - 1, -1, 0) == 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    func_0203ef18(arg0, var_r1);
    func_0203f5ec(arg0, 1);
    func_0203f6fc(arg0);
}
