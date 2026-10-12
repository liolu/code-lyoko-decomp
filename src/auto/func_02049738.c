#include "m2c.h"

s32 func_020238f0(M2C_UNK *);                       /* extern */
s32 func_020454ac(M2C_UNK, M2C_UNK *, s32);         /* extern */
M2C_UNK func_020476c4(M2C_UNK *, s32);              /* extern */

s32 func_02049738(M2C_UNK arg0, void *arg1) {
    u8 sp0[36];

    if (M2C_FIELD(arg1, s32 *, 0) != 3) {
        return 0;
    }
    func_020476c4(sp0, M2C_FIELD(arg1, s32 *, 4));
    M2C_FIELD(arg1, s32 *, 0) = 4;
    M2C_FIELD(arg1, s32 *, 4) = func_020454ac(arg0, sp0, func_020238f0(sp0));
    return 1;
}
