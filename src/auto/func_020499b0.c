#include "m2c.h"

s32 func_020047ec();                                /* extern */
s32 func_02004844(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0203eccc(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0203f0ac(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_0203f10c(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0203ffbc(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_020e94c4;
extern M2C_UNK data_020ed9b4;
extern M2C_UNK data_020ed9bc;
extern s32 data_020fe36c;
extern s32 data_020fe370;

s32 func_020499b0(M2C_UNK arg0) {
    func_0203ffbc(arg0, &data_020ed9b4, &data_020e94c4, 0);
    func_0203f0ac(arg0, &data_020ed9bc, 2);
    func_0203f10c(arg0, 0x3000);
    func_0203eccc(arg0, -3);
    data_020fe36c = func_02004844(0x3000, 0xB4000);
    data_020fe370 = func_020047ec();
    return 1;
}
