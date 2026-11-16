/* compiler: 1.2/sp3  */
#include "m2c.h"

M2C_UNK func_020654b4(u32);                         /* extern */
M2C_UNK func_02065d14(void *);                      /* extern */
M2C_UNK func_0208f8c8();                            /* extern */

void *func_02065c80(void *arg0) {
    u32 temp_r6;
    u32 var_r5;

    temp_r6 = (M2C_FIELD(arg0, s32 *, 0x10) * 0xA8) + M2C_FIELD(arg0, s32 *, 0);
    var_r5  = (M2C_FIELD(arg0, s32 *, 4) * 0xA8) + temp_r6;
    if (var_r5 > temp_r6) {
        do {
            var_r5 -= 0xA8;
            func_020654b4(var_r5);
        } while (var_r5 > temp_r6);
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_02065d14(arg0);
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        func_0208f8c8();
    }
    return arg0;
}
