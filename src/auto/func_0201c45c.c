/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200b040();                                /* extern */
M2C_UNK func_0200b054(s32);                         /* extern */
M2C_UNK func_0201c4b0(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_0201c66c();                                /* extern */
extern s32 data_020f7b40;

void func_0201c45c(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_0200b040();
    if (func_0201c66c() != 0) {
        func_0201c4b0(data_020f7b40 + 0xC4, 0, arg0, 0);
    }
    func_0200b054(temp_r4);
}
