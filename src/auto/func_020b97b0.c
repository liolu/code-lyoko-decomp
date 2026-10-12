/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020b97b0(void *arg0) {
    s8 temp_ip;
    void *temp_r3;

    temp_ip = M2C_FIELD(arg0, s8 *, 0x23);
    if ((temp_ip != -1) && (M2C_FIELD(arg0, s8 *, 0x2A) != temp_ip)) {
        temp_r3 = M2C_FIELD(arg0, void **, 0xC);
        if (temp_r3 != NULL) {
            M2C_FIELD(temp_r3, s8 *, 0x2E) = 1;
            M2C_FIELD(temp_r3, s32 *, 0x40) = (s32) temp_ip;
            M2C_FIELD(temp_r3, s32 *, 0x48) = -1;
            M2C_FIELD(temp_r3, s8 *, 0x2F) = 0;
        }
        M2C_FIELD(arg0, s8 *, 0x2A) = (s8) M2C_FIELD(arg0, s8 *, 0x23);
        return 1;
    }
    return 0;
}
