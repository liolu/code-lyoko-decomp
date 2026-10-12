/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

void func_0200bc78(M2C_UNK, M2C_UNK);

s32 func_020069c0(s32 arg0) {
    if (*(s32 *)0x04000600 & 0x08000000) {
        return -1;
    }
    func_0200bc78(0x04000680, arg0);
    return 0;
}
