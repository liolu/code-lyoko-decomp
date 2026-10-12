/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020b9b50(void *arg0, s32 arg1) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, s32 *, 0x74) = (s32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), u8 *, 0x12) - arg1);
    }
}
