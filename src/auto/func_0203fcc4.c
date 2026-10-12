#include "m2c.h"

M2C_UNK func_0203f0ac(s32, void *, s32);            /* extern */

s32 func_0203fcc4(void *arg0) {
    s32 temp_r2;
    void *temp_r1;

    temp_r1 = arg0 + 0xC;
    temp_r2 = M2C_FIELD(arg0, void **, 0) - temp_r1;
    if (temp_r2 == 0) {
        return 0;
    }
    func_0203f0ac(M2C_FIELD(arg0, s32 *, 8), temp_r1, temp_r2);
    M2C_FIELD(arg0, void **, 0) = (void *) (arg0 + 0xC);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
    return 1;
}
