#include "m2c.h"

M2C_UNK func_02043a44();                            /* extern */
M2C_UNK func_02044ad0(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_0203f030(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void *temp_ip;

    temp_ip = M2C_FIELD(arg0, void **, 0x10);
    if ((u32) M2C_FIELD(temp_ip, u32 *, 0x24) >= (u32) M2C_FIELD(temp_ip, u32 *, 0x20)) {
        func_02043a44(arg0);
    }
    func_02044ad0(arg0, arg1, arg2);
}
