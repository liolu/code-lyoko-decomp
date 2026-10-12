/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

M2C_UNK func_0200b040(void);
void func_0200b054(M2C_UNK);

extern void *data_020f6e6c;

s32 func_02013e30(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_0200b040();
    if (data_020f6e6c != NULL) {
        var_r4 = M2C_FIELD(data_020f6e6c, s32 *, 0x14C);
    } else {
        var_r4 = 0;
    }
    func_0200b054(temp_r0);
    return (s32) (u16) var_r4;
}
