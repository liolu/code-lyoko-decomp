/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */
s32 func_0200d5bc(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

void func_02013bc8(M2C_UNK arg0, M2C_UNK arg1) {
    if (func_0200d5bc(0xE, arg0, 0) == 0) {
        return;
    }
    do {
        WaitByLoop(arg1);
    } while (func_0200d5bc(0xE, arg0, 0) != 0);
}
