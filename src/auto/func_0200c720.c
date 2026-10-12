/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200b040();                                /* extern */
M2C_UNK func_0200b054(s32);                         /* extern */
M2C_UNK func_0200ce04(M2C_UNK);                     /* extern */

void func_0200c720(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_0200b040();
    func_0200ce04(arg1);
    func_0200b054(temp_r4);
}
