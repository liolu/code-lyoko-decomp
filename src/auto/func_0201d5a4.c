/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200b040(void);
void func_0200b054(M2C_UNK);

extern void *data_020f7b48;

void func_0201d5a4(s32 arg0, s32 arg1) {
    M2C_UNK (*temp_r2)(s32, s32);
    s32 temp_r0;

    temp_r0                                 = func_0200b040();
    M2C_FIELD(data_020f7b48, s16 *, 0x5F0E) = (s16) arg0;
    func_0200b054(temp_r0);
    temp_r2 = M2C_FIELD(data_020f7b48, M2C_UNK(**)(s32, s32), 0x5E0);
    if (temp_r2 == NULL) {
        return;
    }
    temp_r2(arg0, arg1);
}
