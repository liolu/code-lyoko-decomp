#include "m2c.h"

M2C_UNK func_02010c10(M2C_UNK *);                   /* extern */
s32 func_02010d58(M2C_UNK *);                       /* extern */
M2C_UNK func_02010e04();                            /* extern */

s32 func_0205bdf4(void) {
    u8 sp0[12];

    func_02010e04();
    if (func_02010d58(sp0) != 0) {
        func_02010c10(sp0);
    }
    return 1;
}
