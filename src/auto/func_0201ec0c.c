/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200b2ec();                            /* extern */
M2C_UNK func_0201ebec();                            /* extern */
extern s32 data_020f7b78;
extern s32 (*data_020f7b7c)();

void func_0201ec0c(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        if (data_020f7b78 != 0) {
            return;
        }
        var_r0 = 0;
        if (data_020f7b7c != NULL) {
            var_r0 = data_020f7b7c();
        }
        if (var_r0 != 0) {
            func_0201ebec();
        }
        data_020f7b78 = 1;
        return;
    }
    func_0200b2ec();
}
