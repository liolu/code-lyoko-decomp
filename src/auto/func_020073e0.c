/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020054d4();                                /* extern */
extern s32 data_020f4428;
extern s32 data_020f442c;

void func_020073e0(void) {
    s32 temp_r0;

    temp_r0       = func_020054d4();
    data_020f442c = temp_r0;
    switch (temp_r0) {                              /* irregular */
        case 0x0:
            return;
        case 0x40:
            data_020f4428 = 0x06894000;
            return;
        case 0x20:
            data_020f4428 = 0x06890000;
            return;
    }
}
