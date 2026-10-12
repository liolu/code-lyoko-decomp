/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200c38c(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_02011184(void *);                      /* extern */
M2C_UNK func_0201119c(void *);                      /* extern */

s32 func_0203a4fc(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    func_0200c38c(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
    temp_r0_2 = (s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F;
    if (temp_r0_2 != 0) {
        return temp_r0_2;
    }
    func_0201119c(arg0 + 8);
    func_02011184(arg0 + 0x14);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x24) | 2;
    M2C_FIELD(arg0, s32 *, 0x24) = temp_r0;
    return temp_r0;
}
