/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200c280(s32, M2C_UNK);                /* extern */
extern s32 data_020fcaa8;

void func_02039698(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_0200c280(arg0, 0);
    data_020fcaa8 &= ~arg0;
}
