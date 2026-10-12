#include "m2c.h"

extern M2C_UNK data_020efaa0;

void func_0208dc64(void *arg0, s16 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efaa0;
    M2C_FIELD(arg0, s16 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
}
