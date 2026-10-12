/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200bce4(s32, M2C_UNK, M2C_UNK);       /* extern */
extern s32 data_020f7b54;

void func_0201e7a4(s32 arg0) {
    s32 temp_r4;

    if (data_020f7b54 == 0) {
        return;
    }
    temp_r4 = arg0 - 1;
    func_0200bce4(data_020f7b54 + (temp_r4 << 5), 0, 0x1E);
    M2C_FIELD((data_020f7b54 + (temp_r4 * 4)), s32 *, 0x1E0) = 0;
}
