#include "m2c.h"

M2C_UNK func_020c3b54(void *, M2C_UNK);             /* extern */

void func_020c42fc(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x7C) = arg1;
    if (((u32) (M2C_FIELD(arg0, u8 *, 0x9C) << 0x1E) >> 0x1F) == 0) {
        return;
    }
    func_020c3b54(arg0, 0);
    func_020c3b54(arg0, 1);
}
