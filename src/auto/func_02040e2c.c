#include "m2c.h"

s32 func_0203f34c(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0203f68c(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02040238(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020402f4(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020403a0(M2C_UNK, M2C_UNK *, s32);         /* extern */
extern M2C_UNK data_020ed09c;
extern M2C_UNK data_020ed0b0;

s32 func_02040e2c(M2C_UNK arg0) {
    func_020402f4(arg0, 1);
    if (func_0203f34c(arg0, 1) == 0) {
        return func_020403a0(arg0, &data_020ed0b0, func_02040238(arg0, 2, &data_020ed09c, 0));
    }
    func_0203f68c(arg0, 1);
    return 1;
}
