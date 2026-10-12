#include "m2c.h"

M2C_UNK func_0204d54c(s32);                         /* extern */
M2C_UNK func_0204d568(s32);                         /* extern */
M2C_UNK func_0204d5d0();                            /* extern */
s32 func_0208f8e8(M2C_UNK);                         /* extern */
extern s32 data_020fe414;

s32 func_0204d4fc(void) {
    s32 temp_r0;

    if (data_020fe414 == 0) {
        temp_r0 = func_0208f8e8(0x48);
        if (temp_r0 != 0) {
            func_0204d5d0();
            func_0204d568(temp_r0 + 4);
            func_0204d54c(temp_r0 + 0x44);
        }
        data_020fe414 = temp_r0;
    }
    return data_020fe414;
}
