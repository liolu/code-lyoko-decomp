#include "m2c.h"

M2C_UNK func_02041974(M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
s32 func_02049798(M2C_UNK, M2C_UNK *);              /* extern */
extern M2C_UNK data_020ed288;

void func_02041910(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 sp0[8];
    M2C_UNK var_r4;

    var_r4 = arg2;
    if (func_02049798(arg1, sp0) == 0) {
        var_r4 = arg1;
    }
    func_02041974(arg0, var_r4, &data_020ed288);
}
