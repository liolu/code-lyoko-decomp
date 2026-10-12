#include "m2c.h"
#include "engine.h"

void func_02043a44(M2C_UNK);
M2C_UNK func_02045030(M2C_UNK);

s32 func_0203f718(s32 arg0) {
    s32 temp_r0;
    void *temp_r1;
    void *temp_r2;

    temp_r1 = M2C_FIELD(arg0, void **, 0x10);
    if ((u32) M2C_FIELD(temp_r1, u32 *, 0x24) >= (u32) M2C_FIELD(temp_r1, u32 *, 0x20)) {
        func_02043a44(arg0);
    }
    temp_r0 = func_02045030(arg0);
    temp_r2 = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(temp_r2, s32 *, 0) = 8;
    M2C_FIELD(temp_r2, s32 *, 4) = temp_r0;
    M2C_FIELD(arg0, void **, 8) = (void *) (M2C_FIELD(arg0, void **, 8) + 8);
    return temp_r0;
}
