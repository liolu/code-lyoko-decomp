/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200c444(u8, M2C_UNK, s16);            /* extern */
extern M2C_UNK data_020e887c;

void func_02039f5c(void **arg0, M2C_UNK arg1, s32 arg2) {
    void *temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 == NULL) {
        return;
    }
    func_0200c444(M2C_FIELD(temp_r0, u8 *, 0x3C), arg1, *((u16 *) ((s8 *) &data_020e887c + (arg2 * 2))));
}
