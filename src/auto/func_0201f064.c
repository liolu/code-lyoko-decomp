/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02009090(void *);                      /* extern */
M2C_UNK func_020092d8(void *, M2C_UNK *, void *, M2C_UNK *, s32, s32); /* extern */
s32 func_0200b040();                                /* extern */
M2C_UNK func_0200b054(s32);                         /* extern */
M2C_UNK func_0201f050(M2C_UNK *);                   /* extern */
extern void *data_020f7d28;
extern M2C_UNK data_020f7d2c;
extern M2C_UNK data_020f8150;
extern M2C_UNK func_0201ef64;

void func_0201f064(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_0200b040();
    if (data_020f7d28 == NULL) {
        data_020f7d28 = arg0;
        func_0201f050(arg0 + 0xC4);
        func_0201f050(&data_020f7d2c);
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        func_020092d8(arg0, &func_0201ef64, arg0, &data_020f8150, 0x400, 0x14);
        func_02009090(arg0);
    }
    func_0200b054(temp_r4);
}
