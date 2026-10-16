#include "m2c.h"

M2C_UNK func_0204e990(s32);                         /* extern */
extern M2C_UNK data_020f31c8;

M2C_UNK **func_020d2ae0(M2C_UNK **arg0) {
    s32 base = (s32) arg0;
    *arg0    = &data_020f31c8;
    func_0204e990((M2C_UNK *) (base + 4));
    return arg0;
}
