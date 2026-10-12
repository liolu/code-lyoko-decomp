/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200b098();                                /* extern */
M2C_UNK func_0200d498();                            /* extern */
extern s32 data_020f6524;

void func_02011d00(void) {
    if (data_020f6524 == 0) {
        return;
    }
    do {
        if (func_0200b098() == 0x12) {
            func_0200d498();
        }
    } while (data_020f6524 != 0);
}
