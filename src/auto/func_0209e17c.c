#include "m2c.h"

M2C_UNK func_0201fbf4(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0209da1c(s32);                         /* extern */

void func_0209e17c(s32 arg0) {
    void *temp_r3;

    if (arg0 == 0) {
        return;
    }
    temp_r3 = arg0 - 8;
    func_0201fbf4(arg0, 0xFE, (temp_r3 + (M2C_FIELD(temp_r3, s32 *, 4) & ~3)) - arg0);
    func_0209da1c(arg0);
}
