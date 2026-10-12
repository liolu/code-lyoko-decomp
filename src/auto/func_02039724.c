/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02031e10(M2C_UNK *, void *);           /* extern */
M2C_UNK func_0203992c(void *);                      /* extern */
M2C_UNK func_0203998c(M2C_UNK *, void *);           /* extern */
extern M2C_UNK data_020fcab8;

void func_02039724(void *arg0, s8 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_r4 != NULL) {
        func_02031e10(temp_r4, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    }
    func_02031e10(&data_020fcab8, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
    if (temp_r4 != NULL) {
        func_0203998c(temp_r4, arg0);
    }
    func_0203992c(arg0);
}
