#include "m2c.h"

M2C_UNK func_020c5934(void *, M2C_UNK);             /* extern */

void func_020c5ce4(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x1A4) = (u8) (M2C_FIELD(arg0, u8 *, 0x1A4) & ~1);
    func_020c5934(arg0, 2);
}
