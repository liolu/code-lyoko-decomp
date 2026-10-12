#include "m2c.h"

M2C_UNK func_0201fd24(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_0204df88(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_0204e004(M2C_UNK *);                   /* extern */
M2C_UNK func_020c5934(void *, M2C_UNK);             /* extern */
M2C_UNK func_020c59b0(void *, M2C_UNK, M2C_UNK *);  /* extern */
extern M2C_UNK data_020f1d34;

void func_020c5c34(void *arg0, M2C_UNK arg1) {
    u8 sp4[256];
    M2C_UNK sp0;

    func_020c5934(arg0, 3);
    M2C_FIELD(arg0, u8 *, 0x1A4) = (u8) (M2C_FIELD(arg0, u8 *, 0x1A4) & ~1);
    func_0201fd24(sp4, &data_020f1d34, arg1);
    func_0204df88(&sp0, sp4);
    func_020c59b0(arg0, 3, &sp0);
    func_0204e004(&sp0);
}
