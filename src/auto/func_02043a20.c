#include "m2c.h"

void func_02043a20(void *arg0, void *arg1, s8 arg2) {
    M2C_FIELD(arg1, void **, 0) = (void *) M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0xC);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0xC) = arg1;
    M2C_FIELD(arg1, s8 *, 5) = 0;
    M2C_FIELD(arg1, s8 *, 4) = arg2;
}
