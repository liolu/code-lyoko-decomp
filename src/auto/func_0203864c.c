#include "m2c.h"

M2C_UNK func_02038714(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020fa65c;

void func_0203864c(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_020fa65c, s32 *, 0) = arg0;
    M2C_FIELD(&data_020fa65c, s32 *, 4) = arg1;
    func_02038714(&data_020fa65c);
}
