#include "m2c.h"

s32 func_0203ed54(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0203f12c(M2C_UNK);                     /* extern */
M2C_UNK func_02040140(M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_020402f4(M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK data_020ed1e0;

s32 func_02041474(M2C_UNK arg0) {
    func_020402f4(arg0, 1);
    if (func_0203ed54(arg0, 1) == 0) {
        func_0203f12c(arg0);
        return 1;
    }
    func_02040140(arg0, 1, &data_020ed1e0);
    return 1;
}
