/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200c5e0();                                /* extern */
s32 func_0200c628();                                /* extern */
M2C_UNK func_0200c680();                            /* extern */
s32 func_0200c750(s32);                             /* extern */
M2C_UNK func_0200c914(M2C_UNK);                     /* extern */
s32 func_0200cbb8(M2C_UNK);                         /* extern */

s32 func_0200cb1c(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;

    if (func_0200c5e0() == 0) {
        return 0;
    }
    temp_r0_3 = func_0200c628();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    temp_r0_4 = arg0 & 1;
    if (temp_r0_4 == 0) {
        return 0;
    }
    if (func_0200c750(temp_r0_4) > 0) {
        do {

        } while (func_0200cbb8(0) != 0);
        temp_r0_2 = func_0200c628();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_0200c914(1);
block_12:
    func_0200c680();
    do {
        func_0200cbb8(1);
        temp_r0 = func_0200c628();
    } while (temp_r0 == 0);
    return temp_r0;
}
