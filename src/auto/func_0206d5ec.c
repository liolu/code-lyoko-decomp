#include "m2c.h"

s32 func_0200b040();                                /* extern */
M2C_UNK func_0200b054(s32);                         /* extern */
M2C_UNK func_0200c170(s32, s32);                    /* extern */
M2C_UNK func_0200d310(s32);                         /* extern */
M2C_UNK func_0203ad5c(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0203ad78(M2C_UNK);                         /* extern */
s32 func_0203b2c0(s32);                             /* extern */

void func_0206d5ec(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg3) {
    s32 temp_r4;
    s32 temp_r5;

    if (arg2 != 0) {
        temp_r4 = func_0200b040();
        temp_r5 = func_0203b2c0(arg2);
        if (arg0 == func_0203ad78(arg3)) {
            func_0203ad5c(arg3, 0);
        }
        func_0203b2c0(temp_r5);
        func_0200b054(temp_r4);
    }
    func_0200c170(arg0, arg0 + arg1);
    func_0200d310(arg0);
}
