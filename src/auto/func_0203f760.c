#include "m2c.h"

s32 func_0203f760(void *arg0, s32 arg1) {
    s32 temp_r0;
    void *temp_r2;

    temp_r2                         = M2C_FIELD(arg0, void **, 0x10);
    temp_r0                         = M2C_FIELD(temp_r2, s32 *, 0x28);
    M2C_FIELD(temp_r2, s32 *, 0x28) = arg1;
    return temp_r0;
}
