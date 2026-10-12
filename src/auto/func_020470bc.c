#include "m2c.h"

M2C_UNK func_02041750(s32, M2C_UNK *, s32);         /* extern */
s32 func_02041c58(void *);                          /* extern */
void *func_02043810(s32);                           /* extern */
M2C_UNK func_02047190(void *, void *);              /* extern */
M2C_UNK func_020472c4(void *, void *);              /* extern */
M2C_UNK func_02047358(void *, void *);              /* extern */
M2C_UNK func_020473a0(void *, void *);              /* extern */
M2C_UNK func_02047430(void *, void *);              /* extern */
s32 func_02047478(void *);                          /* extern */
s32 func_02047508(void *);                          /* extern */
s8 func_0204763c(void *);                           /* extern */
extern M2C_UNK data_020ed808;

void *func_020470bc(void *arg0, s32 arg1) {
    void *temp_r4;

    temp_r4 = func_02043810(M2C_FIELD(arg0, volatile s32 *, 0));
    M2C_FIELD(temp_r4, volatile s32 *, 0x20) = func_02047478(arg0);
    if (M2C_FIELD(temp_r4, volatile s32 *, 0x20) == 0) {
        M2C_FIELD(temp_r4, volatile s32 *, 0x20) = arg1;
    }
    M2C_FIELD(temp_r4, volatile s32 *, 0x3C) = func_02047508(arg0);
    M2C_FIELD(temp_r4, volatile s8 *, 0x44) = func_0204763c(arg0);
    M2C_FIELD(temp_r4, volatile s8 *, 0x45) = func_0204763c(arg0);
    M2C_FIELD(temp_r4, volatile s8 *, 0x46) = func_0204763c(arg0);
    M2C_FIELD(temp_r4, volatile s8 *, 0x47) = func_0204763c(arg0);
    func_02047358(arg0, temp_r4);
    func_020473a0(arg0, temp_r4);
    func_020472c4(arg0, temp_r4);
    func_02047190(arg0, temp_r4);
    func_02047430(arg0, temp_r4);
    if (func_02041c58(temp_r4) == 0) {
        func_02041750(M2C_FIELD(arg0, volatile s32 *, 0), &data_020ed808, M2C_FIELD(arg0, volatile s32 *, 0x10));
    }
    return temp_r4;
}
