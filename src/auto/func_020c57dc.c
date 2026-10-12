#include "m2c.h"

M2C_UNK func_0208f8c8();                         /* extern */
M2C_UNK func_020c584c();                      /* extern */

void *func_020c57dc(void *arg0) {
    u32 temp_r4;
    u32 var_r6;

    temp_r4 = (M2C_FIELD(arg0, s32 *, 0x10) * 0xC) + M2C_FIELD(arg0, s32 *, 0);
    var_r6 = (M2C_FIELD(arg0, s32 *, 4) * 0xC) + temp_r4;
    if (var_r6 > temp_r4) {
        do {
            var_r6 -= 0xC;
            if (((u32) (M2C_FIELD(var_r6, s32 *, 0) << 0x1F) >> 0x1F) != 0) {
                func_0208f8c8(M2C_FIELD(var_r6, s32 *, 8));
            }
        } while (var_r6 > temp_r4);
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_020c584c(arg0);
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        func_0208f8c8();
    }
    return arg0;
}
