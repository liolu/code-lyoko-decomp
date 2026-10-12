/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02032c1c(M2C_UNK, s32);                    /* extern */

s32 func_02032a30(M2C_UNK arg0, s32 *arg1) {
    s32 temp_r0;

    temp_r0 = func_02032c1c(arg0, 0x43504F53);
    if (temp_r0 != 0) {
        *arg1 = temp_r0 + 8;
        return 1;
    }
    *arg1 = 0;
    return 0;
}
