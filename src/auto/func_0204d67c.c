#include "m2c.h"

M2C_UNK func_0204d568(s32);                         /* extern */
M2C_UNK func_0204d6cc(s32);                         /* extern */
M2C_UNK func_0204d6e8();                            /* extern */
s32 func_0208f8e8(M2C_UNK);                         /* extern */
extern s32 data_020fe424;

s32 func_0204d67c(void) {
    s32 temp_r0;

    if (data_020fe424 == 0) {
        temp_r0 = func_0208f8e8(0x48);
        if (temp_r0 != 0) {
            func_0204d6e8();
            func_0204d568(temp_r0 + 4);
            func_0204d6cc(temp_r0 + 0x44);
        }
        data_020fe424 = temp_r0;
    }
    return data_020fe424;
}
