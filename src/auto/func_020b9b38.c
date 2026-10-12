#include "m2c.h"

void func_020b9b38(void *arg0) {
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 0x74) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), u8 *, 0x12);
    }
}
