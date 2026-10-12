#include "m2c.h"

M2C_UNK func_02028c6c(void *, M2C_UNK);             /* extern */

void func_02043584(void *arg0, s32 arg1) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x50);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s32 *, 0x44) = arg1;
        func_02028c6c(M2C_FIELD(arg0, void **, 0x50) + 4, 1);
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), M2C_UNK (**)(void *), 0x28)(arg0);
}
