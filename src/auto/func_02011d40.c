/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200b040(void);
void func_0200b054(M2C_UNK);

extern s32 data_020f6524;

s32 func_02011d40(void) {
    s32 temp_r0;

    temp_r0 = func_0200b040();
    if (data_020f6524 != 0) {
        func_0200b054(temp_r0);
        return 0;
    }
    data_020f6524 = 1;
    func_0200b054(temp_r0);
    return 1;
}
