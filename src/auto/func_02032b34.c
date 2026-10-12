/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02032b24(s32);                         /* extern */
s32 func_02032c1c(M2C_UNK, s32);                    /* extern */

s32 func_02032b34(M2C_UNK arg0, s32 *arg1) {
    s32 temp_r0;

    temp_r0 = func_02032c1c(arg0, 0x50434D50);
    if (temp_r0 == 0) {
        *arg1 = 0;
        return 0;
    }
    func_02032b24(temp_r0 + 8);
    *arg1 = temp_r0 + 8;
    return 1;
}
