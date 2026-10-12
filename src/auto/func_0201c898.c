/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200b040();                                /* extern */
M2C_UNK func_0200b054(s32);                         /* extern */
M2C_UNK func_0200bd78(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_02018cf4(u32);                             /* extern */

s32 func_0201c898(u32 arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r4;

    if (arg0 >= 0x10U) {
        return 0;
    }
    temp_r4 = func_0200b040();
    temp_r0 = func_02018cf4(arg0);
    if (temp_r0 == 0) {
        func_0200b054(temp_r4);
        return 0;
    }
    func_0200bd78(temp_r0 + 0x4C0, arg1, 0xC0);
    func_0200b054(temp_r4);
    return 1;
}
