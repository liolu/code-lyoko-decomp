#include "m2c.h"

M2C_UNK func_02043a20(M2C_UNK, void *, M2C_UNK);    /* extern */
void *func_020448b8(M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */

void *func_020439d4(M2C_UNK arg0, s8 arg1) {
    void *temp_r0;

    temp_r0 = func_020448b8(arg0, 0, 0, ((arg1 - 1) * 8) + 0x18);
    func_02043a20(arg0, temp_r0, 6);
    M2C_FIELD(temp_r0, s8 *, 6) = 1;
    M2C_FIELD(temp_r0, s8 *, 7) = arg1;
    return temp_r0;
}
