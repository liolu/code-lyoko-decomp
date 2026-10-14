/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_020f2cac;

s32 func_020c8b78(void) {
    s32 temp_r1;
    u32 temp_r1_2;

    temp_r1_2     = (data_020f2cac * 0x27) + 0x27A39E8F;
    temp_r1       = (temp_r1_2 >> 0xD) | (temp_r1_2 << 0x13);
    data_020f2cac = temp_r1;
    return temp_r1 & 0xFFF;
}
