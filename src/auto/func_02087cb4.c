#include "m2c.h"

M2C_UNK func_0203f95c(s32, s32, s32);               /* extern */
extern M2C_UNK data_020ef6cc;

void *func_02087cb4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ef6cc;
    func_0203f95c(M2C_FIELD(arg0, s32 *, 8), 0xFFFFD8F0, M2C_FIELD(arg0, s32 *, 0xC));
    return arg0;
}
