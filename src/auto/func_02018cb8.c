/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02009d10(M2C_UNK, s32);                /* extern */
M2C_UNK func_02009d34();                            /* extern */
M2C_UNK func_0201a520(M2C_UNK, s32, M2C_UNK);       /* extern */

void func_02018cb8(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_02009d10(arg2, (arg0 + 0x1F) & ~0x1F);
    func_02009d34();
    func_0201a520(arg2, arg0, arg1);
}
