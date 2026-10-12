/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200d48c();                            /* extern */
s32 func_0200d670(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0200d698(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_020f4820;
extern M2C_UNK func_0200b0d8;

void func_0200b11c(void) {
    if (data_020f4820 != 0) {
        return;
    }
    data_020f4820 = 1;
    func_0200d48c();
    do {

    } while (func_0200d670(0xC, 1) == 0);
    func_0200d698(0xC, &func_0200b0d8);
}
