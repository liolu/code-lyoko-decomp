#include "m2c.h"

M2C_UNK func_02010600(M2C_UNK);                     /* extern */
M2C_UNK func_02010614(M2C_UNK);                     /* extern */
M2C_UNK func_020109dc(M2C_UNK, u16, s32, u16);      /* extern */
s32 func_0208f890(s32);                             /* extern */
M2C_UNK func_0208f8c8(s32);                         /* extern */

void func_0205bae4(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;

    M2C_FIELD(arg0, volatile s32 *, 8) = arg1;
    if (M2C_FIELD(arg0, volatile s32 *, 8) == 2) {
        M2C_FIELD(arg0, volatile s32 *, 0x10) = arg2;
        M2C_FIELD(arg0, volatile s32 *, 0x18) = 0;
        func_0208f8c8(M2C_FIELD(arg0, volatile s32 *, 0xC));
        func_0208f8c8(M2C_FIELD(arg0, volatile s32 *, 0x14));
        M2C_FIELD(arg0, volatile s32 *, 0xC) = func_0208f890((M2C_FIELD(arg0, volatile s32 *, 0x10) + 1) * 8);
        M2C_FIELD(arg0, volatile s32 *, 0x14) = func_0208f890(M2C_FIELD(arg0, volatile s32 *, 0x10) * 8);
        temp_r3 = M2C_FIELD(arg0, volatile s32 *, 0x10);
        func_020109dc(0, (u16) temp_r3, M2C_FIELD(arg0, volatile s32 *, 0xC), (u16) (temp_r3 + 1));
        func_02010614(2);
        func_02010600(2);
        return;
    }
    func_0208f8c8(M2C_FIELD(arg0, volatile s32 *, 0xC));
    func_0208f8c8(M2C_FIELD(arg0, volatile s32 *, 0x14));
    M2C_FIELD(arg0, volatile s32 *, 0xC) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0x14) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0x10) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0x18) = 0;
}
