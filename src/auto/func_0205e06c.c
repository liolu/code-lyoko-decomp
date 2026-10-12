#include "m2c.h"

M2C_UNK func_0205d9f8(void *, s32);                 /* extern */
s32 func_020ae3cc(void *, s32);                     /* extern */
M2C_UNK func_020ae3fc(void *, s32, M2C_UNK);        /* extern */
void *func_020aff7c(s32);                           /* extern */

void func_0205e06c(void *arg0) {
    s32 temp_r5;
    s32 var_r6;
    void *temp_r0;

    M2C_FIELD(arg0, volatile s32 *, 0x24) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x24) + 1);
    if (M2C_FIELD(arg0, volatile s32 *, 0x24) != 1) {
        return;
    }
    temp_r5 = M2C_FIELD(arg0, volatile s32 *, 0x28);
    temp_r0 = func_020aff7c(temp_r5);
    M2C_FIELD(arg0, void **, 0x1C) = (void *) (temp_r0 + M2C_FIELD((temp_r0 + M2C_FIELD(temp_r0, volatile u16 *, 0xE)), s32 *, 0xC));
    func_0205d9f8(arg0, temp_r5);
    var_r6 = 0;
    if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), u8 *, 0x18) <= 0) {
        return;
    }
    do {
        if (func_020ae3cc(M2C_FIELD(arg0, void **, 0x1C), var_r6) != 0) {
            func_020ae3fc(M2C_FIELD(arg0, void **, 0x1C), var_r6, 0xF);
        }
        var_r6 += 1;
    } while (var_r6 < (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), u8 *, 0x18));
}
