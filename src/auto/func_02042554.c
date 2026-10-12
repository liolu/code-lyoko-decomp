/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02044980(void *, M2C_UNK *, M2C_UNK);  /* extern */
extern M2C_UNK data_020ed364;
extern M2C_UNK data_020ed36c;
extern M2C_UNK data_020ed370;
extern M2C_UNK data_020ed378;

void func_02042554(void *arg0, void *arg1) {
    M2C_UNK *var_r1;
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg1, void **, 4);
    if (M2C_FIELD(temp_r2, u8 *, 6) != 0) {
        M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_020ed364;
        M2C_FIELD(arg0, s32 *, 0x1C) = -1;
        M2C_FIELD(arg0, M2C_UNK **, 0xC) = &data_020ed36c;
    } else {
        M2C_FIELD(arg0, M2C_UNK **, 0x10) = (M2C_UNK *) (M2C_FIELD(M2C_FIELD(temp_r2, void **, 0xC), s32 *, 0x20) + 0x10);
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(M2C_FIELD(temp_r2, void **, 0xC), s32 *, 0x3C);
        if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
            var_r1 = &data_020ed370;
        } else {
            var_r1 = &data_020ed378;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0xC) = var_r1;
    }
    func_02044980(arg0 + 0x20, M2C_FIELD(arg0, M2C_UNK **, 0x10), 0x3C);
}
