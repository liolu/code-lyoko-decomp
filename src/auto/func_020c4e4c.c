#include "m2c.h"

M2C_UNK func_0201fc54(s32, s32, M2C_UNK);           /* extern */
s32 func_0208f8e8(M2C_UNK);                         /* extern */
s32 func_020c4f40();                                /* extern */
extern s32 data_020f86a8;

void func_020c4e4c(s32 arg0) {
    s32 var_r0;

    if (data_020f86a8 == 0) {
        var_r0 = func_0208f8e8(0xE8);
        if (var_r0 != 0) {
            var_r0 = func_020c4f40();
        }
        data_020f86a8 = var_r0;
    }
    func_0201fc54(data_020f86a8 + 0x18, arg0 + 0x8C, 0x50);
}
