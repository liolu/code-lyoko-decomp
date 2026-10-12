/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200a6a8(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0200b040();                                /* extern */
M2C_UNK func_0200b054(s32);                         /* extern */
s32 func_0201eb5c();                                /* extern */
extern s32 data_020f7b64;

void func_0201e84c(s32 arg0) {
    M2C_UNK var_r1;
    s32 temp_r4;

    temp_r4 = func_0200b040();
    data_020f7b64 = arg0;
    if (func_0201eb5c() == 0) {
        if (arg0 != 0) {
            var_r1 = 0x1000;
        } else {
            var_r1 = 0x5000;
        }
        func_0200a6a8(0xF000, var_r1);
    }
    func_0200b054(temp_r4);
}
