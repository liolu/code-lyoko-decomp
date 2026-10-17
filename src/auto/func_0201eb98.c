/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK CpuSet(s32 *, M2C_UNK *, s32);              /* extern */
s16 func_02008a20();                                 /* extern */
extern M2C_UNK data_020f7b68;

void func_0201eb98(void) {
    s32 sp0;

    sp0 = 0;
    CpuSet(&sp0, &data_020f7b68, 0x05000001);
    M2C_FIELD(&data_020f7b68, s16 *, 2) = func_02008a20();
}
