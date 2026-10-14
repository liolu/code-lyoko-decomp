#include "m2c.h"

void func_0203df1c(void **arg0) {
    void *temp_r2;

    temp_r2 = *arg0;
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, s32 *, 0x14C) = 0;
        *arg0                            = NULL;
    }
}
