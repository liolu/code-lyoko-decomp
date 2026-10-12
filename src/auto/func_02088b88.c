#include "m2c.h"

M2C_UNK func_0208f870();                         /* extern */

void func_02088b88(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
        func_0208f870();
        func_0208f870(M2C_FIELD(arg0, s32 *, 0x20));
        func_0208f870(M2C_FIELD(arg0, s32 *, 0x24));
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = -1;
}
