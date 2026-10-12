/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200c170(s32, s32);                    /* extern */
M2C_UNK func_0200d310(s32);                         /* extern */
M2C_UNK func_0203bd70(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_0203bd00(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_0203bd70(arg0, arg2, arg3);
    func_0200c170(arg0, arg0 + arg1);
    func_0200d310(arg0);
}
