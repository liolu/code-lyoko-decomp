#include "m2c.h"

M2C_UNK func_0203b9d0();                            /* extern */
M2C_UNK func_0208f870();                            /* extern */

void func_0206ed7c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x9C) != 0) {
        func_0203b9d0();
        M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return;
    }
    func_0208f870();
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
