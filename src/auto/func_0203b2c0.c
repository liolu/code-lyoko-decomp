#include "m2c.h"

extern s32 data_020fd4cc;

s32 func_0203b2c0(s32 arg0) {
    s32 temp_r2;

    temp_r2 = data_020fd4cc;
    data_020fd4cc = arg0;
    return temp_r2;
}
