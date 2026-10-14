/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02009848(void);
M2C_UNK func_0200b040(void);
void func_0200b054(M2C_UNK);

s32 func_0200c5e0(void) {
    s32 temp_r0;
    s32 temp_r4;

    if (func_02009848() == 0) {
        return 1;
    }
    temp_r0             = func_0200b040();
    *(s32 *) 0x04FFF200 = 0x10;
    temp_r4             = *(s32 *) 0x04FFF200;
    func_0200b054(temp_r0);
    if (temp_r4 != 0) {
        return 1;
    }
    return 0;
}
