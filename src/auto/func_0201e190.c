/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02014f4c(M2C_UNK *, void *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0201e810(u16);                         /* extern */
extern void *data_020f7b4c;
extern M2C_UNK func_0201e090;

void func_0201e190(void *arg0) {
    M2C_UNK (*temp_r2)(M2C_UNK, M2C_UNK);

    M2C_FIELD(data_020f7b4c, s16 *, 0x1A) = 0;
    M2C_FIELD(data_020f7b4c, s16 *, 0x1C) = 0;
    M2C_FIELD(data_020f7b4c, s16 *, 0x10) = (s16) ((M2C_FIELD(arg0, u16 *, 0x4E) + 0x21) & ~0x1F);
    M2C_FIELD(data_020f7b4c, s16 *, 0x12) = (s16) (((M2C_FIELD(arg0, u16 *, 0x4C) + 0x55) & ~0x1F) * 2);
    M2C_FIELD(data_020f7b4c, u16 *, 0x14) = (u16) M2C_FIELD(arg0, u16 *, 0x4C);
    M2C_FIELD(data_020f7b4c, u16 *, 0x16) = (u16) M2C_FIELD(arg0, u16 *, 0x4E);
    M2C_FIELD(data_020f7b4c, s16 *, 0x18) = (s16) (M2C_FIELD(data_020f7b4c, u16 *, 0x14) - 6);
    func_0201e810(M2C_FIELD(data_020f7b4c, u16 *, 0x16));
    if (func_02014f4c(&func_0201e090, arg0, 0, 1, 0) == 2) {
        return;
    }
    temp_r2 = M2C_FIELD(data_020f7b4c, M2C_UNK(**)(M2C_UNK, M2C_UNK), 0);
    if (temp_r2 == NULL) {
        return;
    }
    temp_r2(0xB, 0);
}
