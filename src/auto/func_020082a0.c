/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020054ac();                                /* extern */
extern M2C_UNK data_020e880c;
extern s32 data_020f4448;
extern s32 data_020f444c;

void func_020082a0(void) {
    s32 temp_r0;

    temp_r0       = func_020054ac();
    data_020f444c = temp_r0;
    data_020f4448 = *((u16 *) ((s8 *) &data_020e880c + ((temp_r0 >> 4) * 2))) << 0xC;
}
