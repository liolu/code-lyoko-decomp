/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

M2C_UNK func_0200b040(void);
void func_0200b054(M2C_UNK);

extern void *data_020f7b0c;

void func_02017d90(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_0200b040();
    M2C_FIELD(data_020f7b0c, s32 *, 0x14E4) = arg0;
    func_0200b054(temp_r0);
}
