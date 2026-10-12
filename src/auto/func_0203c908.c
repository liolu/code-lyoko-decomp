/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200bd78(s32, void *, M2C_UNK);        /* extern */
s32 func_0203ad78(M2C_UNK);                         /* extern */

s32 func_0203c908(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, s32 *, 0xA4) = func_0203ad78(arg1);
    func_0200bd78(M2C_FIELD(arg0, s32 *, 0xA4), arg0 + 0xA8, 0x40);
    return 1;
}
