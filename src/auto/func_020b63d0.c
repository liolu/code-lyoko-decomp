#include "m2c.h"

s32 func_020b63d0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x48) + M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x60);
}
