#include "m2c.h"

s32 func_02042134(void *arg0, s32 arg1) {
    if ((arg1 < (s32) M2C_FIELD(arg0, u8 *, 0x47)) ||
        ((arg1 >= 0xFA) && ((s32) (arg1 - 0xFA) < (s32) M2C_FIELD(arg0, s32 *, 0x28)))) {
        return 1;
    }
    return 0;
}
