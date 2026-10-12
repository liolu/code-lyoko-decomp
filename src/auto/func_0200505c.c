/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s16 data_020ec080;
extern s16 data_020f4404;

void func_0200505c(void) {
    s32 temp_ip;

    temp_ip = *(s32 *)0x04000000;
    data_020ec080 = 0;
    data_020f4404 = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *)0x04000000 = temp_ip & ~0x30000;
}
