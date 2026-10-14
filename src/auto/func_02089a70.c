/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02089a70(void **arg0, void *arg1) {
    void *temp_r1;

    *arg0   = M2C_FIELD(arg1, void **, 0x58);
    temp_r1 = *arg0;
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 4) = (s32) (M2C_FIELD(temp_r1, s32 *, 4) + 1);
    }
}
