/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0200bb7c(M2C_UNK, M2C_UNK, M2C_UNK);

extern void *data_020f7994;

void func_02018db8(s32 arg0) {
    s32 temp_r4;

    temp_r4                            = ~(1 << arg0);
    M2C_FIELD(data_020f7994, u16 *, 2) = (u16) (M2C_FIELD(data_020f7994, u16 *, 2) & temp_r4);
    M2C_FIELD(data_020f7994, u16 *, 4) = (u16) (M2C_FIELD(data_020f7994, u16 *, 4) & temp_r4);
    func_0200bb7c(0, (arg0 * 0x590) + (s32) (data_020f7994 + 0x10), 0x590);
}
