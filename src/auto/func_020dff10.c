#include "m2c.h"

extern void *data_0210afe0;

s32 func_020dff10(void) {
    if (data_0210afe0 == NULL) {
        return 0;
    }
    if (M2C_FIELD(data_0210afe0, s32 *, 8) != 0) {
        return 1;
    }
    return 0;
}
