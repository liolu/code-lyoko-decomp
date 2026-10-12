/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200b2ec();                            /* extern */
extern s16 data_020f7b68;

void func_0201ec8c(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_020f7b68 = 1;
        return;
    }
    func_0200b2ec();
}
