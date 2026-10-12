/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020199e0(void *arg0) {
    if ((M2C_FIELD(arg0, u16 *, 0x40) != 1) || !(M2C_FIELD(arg0, u8 *, 0x4B) & 2)) {
        return 0;
    }
    return 1;
}
