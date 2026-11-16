/* compiler: 1.2/sp3  */
#include "m2c.h"

M2C_UNK func_0204e990();                      /* extern */
M2C_UNK func_02084dac();                      /* extern */
M2C_UNK func_0208f8c8();                         /* extern */

void *func_02084bf4(void *arg0) {
    u32 temp_r6;
    u32 var_r5;

    temp_r6 = M2C_FIELD(arg0, s32 *, 0) + (M2C_FIELD(arg0, s32 *, 0x10) * 0x10);
    var_r5  = temp_r6 + (M2C_FIELD(arg0, s32 *, 4) * 0x10);
    if (var_r5 > temp_r6) {
        do {
            var_r5 -= 0x10;
            if (((u32) (M2C_FIELD(var_r5, s32 *, 4) << 0x1F) >> 0x1F) != 0) {
                func_0208f8c8(M2C_FIELD(var_r5, s32 *, 0xC));
            }
            func_0204e990((void *) var_r5);
        } while (var_r5 > temp_r6);
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_02084dac(arg0);
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        func_0208f8c8();
    }
    return arg0;
}
