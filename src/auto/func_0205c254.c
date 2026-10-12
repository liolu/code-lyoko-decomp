#include "m2c.h"

M2C_UNK func_0203f2d0(s32, M2C_UNK);                /* extern */
M2C_UNK func_0203f68c(s32, M2C_UNK);                /* extern */

s32 func_0205c254(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        return 1;
    }
    func_0203f2d0(M2C_FIELD(arg0, s32 *, 4), 1);
    func_0203f68c(M2C_FIELD(arg0, s32 *, 4), -2);
    return 0;
}
