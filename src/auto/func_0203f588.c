#include "m2c.h"

void *func_0203f87c();                              /* extern */

void func_0203f588(void *arg0) {
    void *temp_r0;
    void *temp_r2;

    temp_r0                      = func_0203f87c();
    temp_r2                      = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(temp_r2, s32 *, 0) = (s32) M2C_FIELD(temp_r0, s32 *, 0);
    M2C_FIELD(temp_r2, s32 *, 4) = (s32) M2C_FIELD(temp_r0, s32 *, 4);
    M2C_FIELD(arg0, void **, 8)  = (void *) (M2C_FIELD(arg0, void **, 8) + 8);
}
