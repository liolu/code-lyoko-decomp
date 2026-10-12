/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02009090();                      /* extern */
M2C_UNK func_020092d8(); /* extern */
s32 func_0200b040();                                /* extern */
M2C_UNK func_0200b054();                         /* extern */
M2C_UNK func_0201c658();                         /* extern */
extern void *data_020f7b40;
extern M2C_UNK func_0201c710;

void func_0201c688(void *arg0, s32 arg1) {
    s32 temp_ip;
    s32 temp_r4;

    temp_r4 = func_0200b040();
    if (data_020f7b40 == NULL) {
        data_020f7b40 = arg0;
        func_0201c658(arg0 + 0xC4);
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        temp_ip = (arg1 - 0xE4) & ~3;
        func_020092d8(arg0, &func_0201c710, arg0, arg0 + 0xE4 + temp_ip, temp_ip, 0);
        func_02009090(arg0);
    }
    func_0200b054(temp_r4);
}
