#include "m2c.h"

M2C_UNK func_0208f8c8();                            /* extern */

void func_020654b4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        func_0208f8c8();
    }
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        return;
    }
    func_0208f8c8();
}
