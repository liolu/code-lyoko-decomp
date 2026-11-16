/* compiler: 1.2/sp2p3 -flag no-opt_rebuildconditionals */
#include "m2c.h"

s32 func_020425d8(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 8) & 1)) {
        return M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, -4), s32 *, 0xC);
    }
    return 0;
}
