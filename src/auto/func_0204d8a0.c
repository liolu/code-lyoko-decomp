#include "m2c.h"

M2C_UNK func_0204d568(s32);                         /* extern */
M2C_UNK func_0204d8f0(s32);                         /* extern */
M2C_UNK func_0204d90c();                            /* extern */
s32 func_0208f8e8(M2C_UNK);                         /* extern */
extern s32 data_020fe41c;

s32 func_0204d8a0(void) {
    s32 temp_r0;

    if (data_020fe41c == 0) {
        temp_r0 = func_0208f8e8(0x48);
        if (temp_r0 != 0) {
            func_0204d90c();
            func_0204d568(temp_r0 + 4);
            func_0204d8f0(temp_r0 + 0x44);
        }
        data_020fe41c = temp_r0;
    }
    return data_020fe41c;
}
