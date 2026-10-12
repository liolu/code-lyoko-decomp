#include "m2c.h"

M2C_UNK func_0203eeb8(s32, s32);                    /* extern */
M2C_UNK func_0203f06c(s32);                         /* extern */

s32 func_0205c67c(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x10) != 0) {
        return 0;
    }
    M2C_FIELD(arg0, u8 *, 0x10) = 1U;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    func_0203f06c(M2C_FIELD(arg0, s32 *, 4));
    func_0203eeb8(M2C_FIELD(arg0, s32 *, 4), 0xFFFFD8EF);
    return 1;
}
