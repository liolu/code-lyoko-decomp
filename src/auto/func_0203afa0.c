#include "m2c.h"

extern void *data_020fd4cc;

s32 func_0203afa0(void) {
    s32 *var_r0;
    s32 temp_r0;
    void *temp_r1;

    temp_r1 = M2C_FIELD(data_020fd4cc, void **, 0x8C);
    temp_r0 = M2C_FIELD(temp_r1, s32 *, 8);
    if (temp_r0 == 0) {
        var_r0 = NULL;
    } else {
        var_r0 = temp_r1 + temp_r0;
    }
    if (var_r0 == NULL) {
        return 0;
    }
    return *var_r0;
}
