#include "m2c.h"

M2C_UNK func_02043898(void *, s32);                 /* extern */
M2C_UNK func_02043bbc(void *, M2C_UNK);             /* extern */
void *func_020448b8(void *, void *, s32, M2C_UNK);  /* extern */
M2C_UNK func_020452e8(void *, void *);              /* extern */
M2C_UNK func_0204540c(M2C_UNK, void *);             /* extern */
M2C_UNK func_020456e8(void *);                      /* extern */

void func_02045094(void *arg0) {
    void *temp_r1;
    void *temp_r2;

    func_02043898(arg0, M2C_FIELD(arg0, s32 *, 0x1C));
    if (M2C_FIELD(arg0, void **, 0x10) != NULL) {
        func_02043bbc(arg0, 1);
        func_020456e8(arg0);
        temp_r2 = M2C_FIELD(arg0, void **, 0x10);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0x18) = func_020448b8(arg0, M2C_FIELD(temp_r2, void **, 0x18), M2C_FIELD(temp_r2, s32 *, 0x1C), 0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 0x1C) = 0;
    }
    func_020452e8(arg0, arg0);
    temp_r1 = M2C_FIELD(arg0, void **, 0x10);
    if (temp_r1 != NULL) {
        func_020448b8(NULL, temp_r1, 0x90, 0);
    }
    func_0204540c(0, arg0);
}
