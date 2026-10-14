/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02036014();                            /* extern */
extern s32 data_020f96ac;
extern void *data_020f96b0;

void func_020343f4(void) {
    s32 temp_r3;

    *(s32 *) 0x04000448 = 1;
    temp_r3             = M2C_FIELD(data_020f96b0, s32 *, 0x7C);
    if (temp_r3 != 0) {
        if (temp_r3 & 1) {
            data_020f96ac = 0;
        }
        if (temp_r3 & 2) {
            M2C_FIELD(data_020f96b0, s32 *, 0x74) = 0;
            func_02036014();
        }
        M2C_FIELD(data_020f96b0, s32 *, 0x7C) = 0;
    }
    data_020f96b0 = NULL;
}
