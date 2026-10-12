#include "m2c.h"

M2C_UNK func_0204df88(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_0204e004(M2C_UNK *);                   /* extern */
M2C_UNK func_020c59b0(M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK data_020f1d4c;
extern M2C_UNK data_020f1d62;
extern void **data_020ff650;
extern u8 data_0210ad68;

void func_020c6408(M2C_UNK arg0) {
    u8 sp0[8];

    if (data_0210ad68 != 0) {
        return;
    }
    M2C_FIELD(*data_020ff650, M2C_UNK (**)(void **, M2C_UNK *, s32), 8)(data_020ff650, &data_020f1d4c, 0x9EB10);
    func_0204df88(sp0, &data_020f1d62);
    func_020c59b0(arg0, 0, sp0);
    M2C_FIELD(*data_020ff650, M2C_UNK (**)(void **, M2C_UNK), 0x68)(data_020ff650, 0x60);
    M2C_FIELD(*data_020ff650, M2C_UNK (**)(void **, M2C_UNK), 0x60)(data_020ff650, 0x7F);
    func_0204e004(sp0);
}
