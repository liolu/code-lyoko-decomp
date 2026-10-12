/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02031f60(void *, s32);                 /* extern */
s32 func_02032288(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_0203b70c();                            /* extern */

s32 func_0203b67c(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = func_02032288(*arg0, 0x14, 4);
    if (temp_r0 == 0) {
        return 0;
    }
    func_0203b70c();
    func_02031f60(((s8 *)arg0 + 4), temp_r0);
    return 1;
}
