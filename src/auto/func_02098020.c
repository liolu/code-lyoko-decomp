#include "m2c.h"

M2C_UNK func_0208f870();                            /* extern */

void func_02098020(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return;
    }
    func_0208f870();
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}
