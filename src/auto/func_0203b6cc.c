/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02031ff4();                /* extern */
s32 func_0203b67c();                           /* extern */

s32 func_0203b6cc(s32 *arg0, s32 arg1) {
    func_02031ff4(((s8 *) arg0 + 4), 0xC);
    *arg0 = arg1;
    if (func_0203b67c(arg0) != 0) {
        return 1;
    }
    return 0;
}
