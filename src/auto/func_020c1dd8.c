#include "m2c.h"

void *func_020c1e2c(void *, s32 *, s32, void *);    /* extern */

void func_020c1dd8(void **arg0, void *arg1, s32 *arg2) {
    void *temp_r0;

    temp_r0 = func_020c1e2c(arg1, arg2, M2C_FIELD(arg1, s32 *, 4), arg1 + 4);
    if ((temp_r0 == (arg1 + 4)) || ((s32) *arg2 < (s32) M2C_FIELD(temp_r0, s32 *, 0xC))) {
        *arg0 = arg1 + 4;
        return;
    }
    *arg0 = temp_r0;
}
