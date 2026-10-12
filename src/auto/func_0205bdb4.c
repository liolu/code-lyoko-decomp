#include "m2c.h"

M2C_UNK func_0205bc14();                            /* extern */

void func_0205bdb4(void *arg0) {
    s8 var_r0;
    u8 temp_r1;

    func_0205bc14();
    temp_r1 = M2C_FIELD(arg0, u8 *, 0x1C);
    if (temp_r1 == M2C_FIELD(arg0, u8 *, 0x1D)) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x1E) = temp_r1;
    if (M2C_FIELD(arg0, u8 *, 0x1C) == 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x1F) = var_r0;
    M2C_FIELD(arg0, u8 *, 0x1D) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
}
