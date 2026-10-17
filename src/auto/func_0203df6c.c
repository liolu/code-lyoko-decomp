/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203a3f8(s32, M2C_UNK, s16);           /* extern */
extern M2C_UNK data_020e887c;

void func_0203df6c(s32 *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 == 0) {
        return;
    }
    func_0203a3f8(temp_r0, arg1, *((u16 *) ((s8 *) &data_020e887c + (arg2 * 2))));
}
