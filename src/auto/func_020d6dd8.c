#include "m2c.h"

M2C_UNK func_0204e420(M2C_UNK *);                   /* extern */
M2C_UNK func_020d6e20(M2C_UNK *);                   /* extern */
void *func_020d70f0(s32, M2C_UNK *);                /* extern */
M2C_UNK func_020d7190(M2C_UNK *, s32, M2C_UNK *);   /* extern */

void func_020d6dd8(s32 arg0, s32 arg1) {
    u8 sp4[8];
    M2C_UNK sp0;

    func_020d6e20(&sp0);
    func_020d7190(sp4, arg0 + 4, &sp0);
    M2C_FIELD(func_020d70f0(arg0 + 4, &sp0), s32 *, 4) = arg1;
    func_0204e420(&sp0);
}
