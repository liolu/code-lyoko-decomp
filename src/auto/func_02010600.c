#include "m2c.h"

extern M2C_UNK data_020f64d4;

s32 func_02010600(s32 arg0) {
    return M2C_FIELD(&data_020f64d4, u16 *, 0x34) & arg0;
}
