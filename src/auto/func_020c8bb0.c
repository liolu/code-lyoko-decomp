/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_020f2cac;

void func_020c8bb0(void) {
    u32 temp_r1;

    temp_r1       = (data_020f2cac * 0x27) + 0x27A39E8F;
    data_020f2cac = (temp_r1 >> 0xD) | (temp_r1 << 0x13);
}
