#include "m2c.h"

extern void *data_020f6600;

s32 func_02012e28(void) {
    return M2C_FIELD(data_020f6600, s32 *, 0x18);
}
