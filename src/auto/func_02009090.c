/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02008f78();                            /* extern */
s32 func_0200b040();                                /* extern */
M2C_UNK func_0200b054(s32);                         /* extern */

void func_02009090(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_0200b040();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_02008f78();
    func_0200b054(temp_r4);
}
