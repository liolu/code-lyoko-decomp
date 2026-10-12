#include "m2c.h"

M2C_UNK func_020448b8(void *, s32, s32, M2C_UNK);   /* extern */

void func_020456e8(void *arg0) {
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg0, void **, 0x10);
    func_020448b8(arg0, M2C_FIELD(temp_r1, s32 *, 0), M2C_FIELD(temp_r1, s32 *, 8) * 4, 0);
}
