/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02008a14();                            /* extern */
M2C_UNK func_0200b054(s32);                         /* extern */

void func_0201e904(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_02008a14(arg0);
    }
    func_0200b054(M2C_FIELD(arg1, s32 *, 4));
}
