#include "m2c.h"

M2C_UNK func_02041974(M2C_UNK, s32 *, M2C_UNK *);   /* extern */
extern M2C_UNK data_020ed2a0;

void func_02041954(M2C_UNK arg0, s32 *arg1, s32 *arg2) {
    s32 *var_r1;

    var_r1 = arg1;
    if (*var_r1 == 4) {
        var_r1 = arg2;
    }
    func_02041974(arg0, var_r1, &data_020ed2a0);
}
