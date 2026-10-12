#include "m2c.h"

M2C_UNK func_0203e8f4(s32, s32);                    /* extern */
M2C_UNK func_0203fcc4();                            /* extern */

void func_0203fb80(void *arg0) {
    func_0203fcc4();
    func_0203e8f4(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 4) = 1;
}
