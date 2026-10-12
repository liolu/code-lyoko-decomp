/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0208f3b4(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 4) != 0) {
        return M2C_FIELD(arg0, s32 *, 0x30) - M2C_FIELD(arg0, s32 *, 0x2C);
    }
    return -1;
}
