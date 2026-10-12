/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02018d24();                            /* extern */
M2C_UNK func_02018e80(s32);                         /* extern */
extern void *data_020f7990;
extern s32 data_020f7994;

void func_0201933c(s32 arg0) {
    s32 temp_r4;

    temp_r4 = arg0 * 0x590;
    if (M2C_FIELD(data_020f7990, u8 *, 5) == M2C_FIELD((data_020f7994 + temp_r4), u8 *, 0x4C3)) {
        return;
    }
    func_02018d24(arg0);
    func_02018e80(arg0);
    M2C_FIELD((data_020f7994 + temp_r4), u8 *, 0x4C3) = (u8) M2C_FIELD(data_020f7990, u8 *, 5);
}
