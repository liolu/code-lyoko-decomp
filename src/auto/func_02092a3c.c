#include "m2c.h"

M2C_UNK func_0208f8c8(s32);                         /* extern */
M2C_UNK func_02092b08(s32);                         /* extern */
extern s32 data_021034ec;

void func_02092a3c(void) {
    s32 temp_r4;

    temp_r4 = data_021034ec;
    if (temp_r4 != 0) {
        func_02092b08(temp_r4);
        func_0208f8c8(temp_r4);
    }
    data_021034ec = 0;
}
