#include "m2c.h"

M2C_UNK func_02057488();                            /* extern */
M2C_UNK func_0205fa70();                            /* extern */
extern M2C_UNK data_020ec868;
extern M2C_UNK data_020ee1c8;

void *func_02060cb8(void *arg0, s32 *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ec868;
    M2C_FIELD(arg0, volatile s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ee1c8;
    M2C_FIELD(arg0, volatile s32 *, 8) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0xC) = (s32) *arg1;
    if ((s32) M2C_FIELD(arg0, volatile s32 *, 0xC) >= 0) {
        func_0205fa70();
        func_02057488();
    }
    M2C_FIELD(arg0, volatile s32 *, 0x10) = 0;
    M2C_FIELD(arg0, volatile s8 *, 0x14) = 1;
    return arg0;
}
