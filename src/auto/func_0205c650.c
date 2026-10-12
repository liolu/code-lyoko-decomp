#include "m2c.h"

M2C_UNK func_0203f06c(s32);                         /* extern */

void func_0205c650(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x10) == 0) {
        return;
    }
    func_0203f06c(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
}
