/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200b040();                                /* extern */
M2C_UNK func_0200b054(s32);                         /* extern */
s32 func_0201a904();                                /* extern */
M2C_UNK func_0201c45c(M2C_UNK *);                   /* extern */
s32 func_0201c66c();                                /* extern */
extern void *data_020f7b08;
extern M2C_UNK func_0201a8f8;

s32 func_0201a870(void) {
    s32 temp_r4;
    s32 var_r5;

    var_r5 = 1;
    temp_r4 = func_0200b040();
    if (M2C_FIELD(data_020f7b08, u16 *, 0x526) == 0) {
        M2C_FIELD(data_020f7b08, s32 *, 0x5E4) = 0;
        M2C_FIELD(data_020f7b08, u16 *, 0x526) = 1U;
        if (func_0201c66c() != 0) {
            func_0201c45c(&func_0201a8f8);
            var_r5 = 0;
        } else {
            var_r5 = func_0201a904();
        }
    }
    func_0200b054(temp_r4);
    return var_r5;
}
