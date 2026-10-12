/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200b2ec();                            /* extern */
extern s16 data_020f4824;

void func_0200b0d8(s32 arg0, s32 arg1) {
    if (((u32) ((arg1 & 0x7F00) << 8) >> 0x10) == 0x10) {
        data_020f4824 = 1;
        return;
    }
    func_0200b2ec();
}
