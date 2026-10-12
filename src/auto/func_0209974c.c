#include "m2c.h"

extern M2C_UNK data_020eff60;

s32 func_0209974c(void *arg0) {
    return *((M2C_UNK *)((s8 *)&data_020eff60 + (M2C_FIELD(arg0, s32 *, 0x10) * 4)));
}
