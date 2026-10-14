/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200b040();                                /* extern */
M2C_UNK func_0200b054(s32);                         /* extern */
void *func_02031df8(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_02031e10(M2C_UNK, void *);             /* extern */

void *func_0203d704(M2C_UNK arg0) {
    s32 temp_r5;
    void *temp_r0;
    void *temp_r1;

    temp_r5 = func_0200b040();
    temp_r0 = func_02031df8(arg0, 0);
    if (temp_r0 != NULL) {
        func_02031e10(arg0, temp_r0);
        temp_r1                          = M2C_FIELD(temp_r0, void **, 8);
        M2C_FIELD(temp_r1, s32 *, 0x11C) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x11C) - 1);
    }
    func_0200b054(temp_r5);
    return temp_r0;
}
