/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f3dc();                            /* extern */
extern s32 data_020f6458;

void func_0200f380(s32 arg0) {
    if (data_020f6458 != 0) {
        return;
    }
    data_020f6458 = 1;
    func_0200f3dc(arg0);
}
