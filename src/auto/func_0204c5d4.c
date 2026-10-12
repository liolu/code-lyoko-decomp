/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0204c5d4(void *arg0, s32 *arg1, s32 *arg2) {
    if (arg0 == NULL) {
        return -0x66;
    }
    *arg1 = M2C_FIELD(arg0, s32 *, 0x58);
    *arg2 = M2C_FIELD(arg0, s32 *, 0x54);
    return 0;
}
