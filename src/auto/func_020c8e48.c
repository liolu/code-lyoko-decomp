#include "m2c.h"

M2C_UNK func_0204e420(s32);                         /* extern */
extern M2C_UNK data_020f2cb8;

M2C_UNK **func_020c8e48(M2C_UNK **arg0) {
    s32 base = (s32) arg0;
    *arg0    = &data_020f2cb8;
    func_0204e420((M2C_UNK *) (base + 100));
    return arg0;
}
