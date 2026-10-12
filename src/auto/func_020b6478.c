/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c3d64(s32, s32, s32);               /* extern */

void func_020b6478(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4C) = arg2;
    func_020c3d64(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x48), M2C_FIELD(arg0, s32 *, 0x4C));
}
