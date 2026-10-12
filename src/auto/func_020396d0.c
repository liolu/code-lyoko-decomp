/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200c2ac(s32, M2C_UNK);                /* extern */
extern s32 data_020fcaa8;

s32 func_020396d0(s32 arg0) {
    if (arg0 == 0) {
        return 1;
    }
    if (arg0 & data_020fcaa8) {
        return 0;
    }
    func_0200c2ac(arg0, 0);
    data_020fcaa8 |= arg0;
    return 1;
}
