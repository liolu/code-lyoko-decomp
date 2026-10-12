/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02008f78();                            /* extern */
M2C_UNK func_020096a4(s32, void *);                 /* extern */
s32 func_0200b040();                                /* extern */
M2C_UNK func_0200b054(s32);                         /* extern */
extern void **data_020f44d4;

void func_02009144(s32 arg0) {
    s32 temp_r5;
    void *temp_r4;

    temp_r5 = func_0200b040();
    temp_r4 = *data_020f44d4;
    if (arg0 != 0) {
        M2C_FIELD(temp_r4, s32 *, 0x78) = arg0;
        func_020096a4(arg0, temp_r4);
    }
    M2C_FIELD(temp_r4, s32 *, 0x64) = 0;
    func_02008f78();
    func_0200b054(temp_r5);
}
