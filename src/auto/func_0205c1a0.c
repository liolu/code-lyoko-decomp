#include "m2c.h"

M2C_UNK func_02003ae8(void *);                      /* extern */
M2C_UNK func_0205c068(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_020ec868;
extern M2C_UNK data_020ede44;

void *func_0205c1a0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ec868;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ede44;
    M2C_FIELD(arg0, s32 *, 8) = 0x1555;
    M2C_FIELD(arg0, s32 *, 0xC) = 0x199;
    M2C_FIELD(arg0, s32 *, 0x10) = 0x190000;
    func_02003ae8(arg0 + 0x2C);
    func_0205c068(arg0, 0x3C000);
    return arg0;
}
