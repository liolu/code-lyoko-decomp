#include "m2c.h"

M2C_UNK func_0205c510(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_02087b70(M2C_UNK *);                       /* extern */
M2C_UNK func_02087cb4(M2C_UNK *);                   /* extern */

s32 func_0205c598(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[16];
    s32 temp_r4;

    func_0205c510(sp0, arg0, arg1);
    temp_r4 = func_02087b70(sp0);
    func_02087cb4(sp0);
    return temp_r4;
}
