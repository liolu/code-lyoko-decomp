#include "m2c.h"

s32 func_020724bc(s32 arg0, s32 arg1) {
    return M2C_FIELD(((arg1 * 0x30) + arg0), s32 *, 4);
}
