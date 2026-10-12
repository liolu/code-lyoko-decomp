/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200b040();                                /* extern */
M2C_UNK func_0200b054(s32);                         /* extern */
M2C_UNK func_0200b2ec();                            /* extern */
M2C_UNK func_0201a870();                            /* extern */
extern void *data_020f7b0c;

void func_0201a830(void) {
    s32 temp_r4;

    temp_r4 = func_0200b040();
    if (M2C_FIELD(data_020f7b0c, s32 *, 0x1320) == 0) {
        func_0200b2ec();
    }
    func_0201a870();
    func_0200b054(temp_r4);
}
