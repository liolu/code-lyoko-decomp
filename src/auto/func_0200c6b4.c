/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200b0a4(M2C_UNK);                     /* extern */
s32 func_0200c5e0();                                /* extern */
s32 func_0200d670(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0200d698(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK func_0200c720;

void func_0200c6b4(void) {
    func_0200d698(7, &func_0200c720);
    if (func_0200c5e0() == 0) {
        return;
    }
    if (func_0200d670(7, 1) != 0) {
        return;
    }
    do {
        func_0200b0a4(0x64);
    } while (func_0200d670(7, 1) == 0);
}
