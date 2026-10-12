/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02014298(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02014d18(u16, M2C_UNK, M2C_UNK);       /* extern */

s32 func_02016454(void *arg0) {
    s32 temp_r0;

    temp_r0 = func_02014298(2, 9, 0xA);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg0 == NULL) {
        return 6;
    }
    if (M2C_FIELD(arg0, u16 *, 0x80E) == 0) {
        return 3;
    }
    func_02014d18(M2C_FIELD(arg0, u16 *, 0x816), 0, 0);
    M2C_FIELD(arg0, u16 *, 0x80E) = 0U;
    M2C_FIELD(arg0, s16 *, 0x81C) = 0;
    return 0;
}
