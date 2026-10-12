/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201d5a4(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0201d854();                            /* extern */
extern s16 data_020f7b44;
extern void *data_020f7b48;

void func_0201d638(void) {
    data_020f7b44 = 0;
    M2C_FIELD(data_020f7b48, s32 *, 0x5F04) = 0;
    func_0201d854();
    func_0201d5a4(0x14, 0);
}
