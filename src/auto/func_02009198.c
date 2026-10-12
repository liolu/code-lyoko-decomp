/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02008e04();                            /* extern */
M2C_UNK func_02008e3c();                            /* extern */
M2C_UNK func_02008f78();                            /* extern */
M2C_UNK func_020090c4(void *);                      /* extern */
M2C_UNK func_0200953c(void *);                      /* extern */
M2C_UNK func_0200961c(s32, void *);                 /* extern */
M2C_UNK func_02009b44(void *);                      /* extern */
M2C_UNK func_0200b2ec();                            /* extern */
extern void **data_020f44d4;

void func_02009198(void) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *data_020f44d4;
    func_02008e3c();
    func_02009b44(temp_r4);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x78);
    if (temp_r0 != 0) {
        func_0200961c(temp_r0, temp_r4);
    }
    func_0200953c(temp_r4);
    M2C_FIELD(temp_r4, s32 *, 0x64) = 2;
    func_020090c4(temp_r4 + 0x9C);
    func_02008e04();
    func_02008f78();
    func_0200b2ec();
}
