/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02031df8(s32, M2C_UNK);                  /* extern */
M2C_UNK func_02031e10(s32, void *);                 /* extern */
M2C_UNK func_0203b910(s32);                         /* extern */
extern M2C_UNK data_020fcf04;

s32 func_02039a34(s32 arg0, void *arg1) {
    s32 temp_r5;
    void *temp_r0;

    temp_r5 = (arg0 * 0x24) + (s32) &data_020fcf04;
    temp_r0 = func_02031df8(temp_r5 + 0xC, 0);
    if (temp_r0 == NULL) {
        return 0;
    }
    func_02031e10(temp_r5 + 0xC, temp_r0);
    M2C_FIELD(temp_r0, void **, 0xC) = arg1;
    M2C_FIELD(arg1, void **, 8) = temp_r0;
    func_0203b910(M2C_FIELD(temp_r0, s32 *, 8));
    return M2C_FIELD(temp_r0, s32 *, 8);
}
