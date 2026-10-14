#include "m2c.h"

void func_0203f10c(void *arg0, s32 arg1) {
    void *temp_r3;

    temp_r3                      = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(temp_r3, s32 *, 0) = 3;
    M2C_FIELD(temp_r3, s32 *, 4) = arg1;
    M2C_FIELD(arg0, void **, 8)  = (void *) (M2C_FIELD(arg0, void **, 8) + 8);
}
