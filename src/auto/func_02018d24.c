/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200bb7c(M2C_UNK, void *, M2C_UNK);    /* extern */
extern void *data_020f7994;

void func_02018d24(s32 arg0) {
    s32 temp_r1;
    s32 temp_r4;

    temp_r4 = ~(1 << arg0);
    M2C_FIELD(data_020f7994, u16 *, 2) = (u16) (M2C_FIELD(data_020f7994, u16 *, 2) & temp_r4);
    temp_r1 = arg0 * 0x590;
    M2C_FIELD(data_020f7994, u16 *, 4) = (u16) (M2C_FIELD(data_020f7994, u16 *, 4) & temp_r4);
    M2C_FIELD((data_020f7994 + temp_r1), s32 *, 0x590) = 0;
    M2C_FIELD((data_020f7994 + temp_r1), s32 *, 0x594) = 0;
    M2C_FIELD((data_020f7994 + temp_r1), s16 *, 0x598) = 0;
    M2C_FIELD((data_020f7994 + temp_r1), s16 *, 0x59C) = 0;
    func_0200bb7c(0, data_020f7994 + 0x10 + temp_r1, 0x4C0);
}
