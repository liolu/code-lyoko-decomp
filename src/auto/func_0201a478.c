#include "m2c.h"

extern void *data_020f7b08;

s32 func_0201a478(void) {
    if (M2C_FIELD(data_020f7b08, u8 *, 0x50D) == 1) {
        return 1;
    }
    return 0;
}
