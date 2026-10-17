#include "m2c.h"

M2C_UNK func_0202f218(M2C_UNK, s32);                /* extern */
M2C_UNK func_0205c510(M2C_UNK *);                   /* extern */
s32 func_02087b28(M2C_UNK *);                       /* extern */
M2C_UNK func_02087cb4(M2C_UNK *);                   /* extern */

void func_0205c560(M2C_UNK arg0) {
    u8 sp0[16];

    func_0205c510(sp0);
    func_0202f218(arg0, func_02087b28(sp0));
    func_02087cb4(sp0);
}
