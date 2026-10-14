#include "m2c.h"

M2C_UNK func_0200bbc4(M2C_UNK, s32, s32);           /* extern */
M2C_UNK func_0208f870();                            /* extern */
s32 func_0208f890(M2C_UNK);                         /* extern */

void func_02098bb8(void *arg0, M2C_UNK arg1, s32 arg2) {
    if (M2C_FIELD(arg0, volatile s32 *, 0x14) != 0) {
        func_0208f870();
        M2C_FIELD(arg0, volatile s32 *, 0x14) = 0;
    }
    M2C_FIELD(arg0, volatile s32 *, 0x14) = func_0208f890(0x210);
    M2C_FIELD(arg0, void **, 0x10)        = (void *) (M2C_FIELD(arg0, volatile s32 *, 0x14) + 0x200);
    func_0200bbc4(arg1, M2C_FIELD(arg0, volatile s32 *, 0x14), arg2 << 5);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 0)   = 4;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 4)   = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 8)   = 0x200;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 0xC) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x14);
}
