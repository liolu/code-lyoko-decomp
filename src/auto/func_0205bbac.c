/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0205bbac(void *arg0, s32 arg1) {
    if (!(M2C_FIELD(arg0, u16 *, 4) & arg1) && (M2C_FIELD(arg0, u16 *, 6) & arg1)) {
        return 1;
    }
    return 0;
}
