/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200bb94(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_02018d24(s32);                         /* extern */
M2C_UNK func_02018e80(s32);                         /* extern */
extern s32 data_020f7994;

void func_020193b8(void *arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = arg1 * 0x590;
    if (M2C_FIELD(arg0, u16 *, 0x48) == M2C_FIELD((data_020f7994 + temp_r4), u16 *, 0x518)) {
        return;
    }
    func_02018d24(arg1);
    func_0200bb94(arg0, data_020f7994 + 0x4D0 + temp_r4, 0xC0);
    func_02018e80(arg1);
}
