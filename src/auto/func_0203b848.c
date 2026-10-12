/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02032154(s32, M2C_UNK);                /* extern */
s32 func_020321b0(s32, u16);                        /* extern */
s32 func_0203b67c(void *);                          /* extern */

s32 func_0203b848(void *arg0) {
    if (func_020321b0(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u16 *, 0xC)) == 0) {
        return -1;
    }
    if (func_0203b67c(arg0) != 0) {
        return M2C_FIELD(arg0, u16 *, 0xC) - 1;
    }
    func_02032154(M2C_FIELD(arg0, s32 *, 0), 0);
    return -1;
}
