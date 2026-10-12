#include "m2c.h"

M2C_UNK func_0204cce4(s32);                         /* extern */

void func_0208efb0(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x18) != 0) {
        func_0204cce4(M2C_FIELD(arg0, s32 *, 4));
    }
    M2C_FIELD(arg0, u8 *, 0x18) = 0U;
}
