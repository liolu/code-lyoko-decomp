#include "m2c.h"

M2C_UNK func_0203eccc(M2C_UNK, s32);                /* extern */
M2C_UNK func_0203ede0(M2C_UNK);                     /* extern */
M2C_UNK func_0203f06c(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_0203f5ec(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0203ffbc(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020405ec();                            /* extern */
extern M2C_UNK data_020e9208;
extern M2C_UNK data_020ecf30;
extern M2C_UNK data_020ecf3c;

s32 func_02040588(M2C_UNK arg0) {
    func_020405ec(arg0);
    func_0203ffbc(arg0, &data_020ecf30, &data_020e9208, 0);
    func_0203ede0(arg0);
    func_0203f06c(arg0, &data_020ecf3c);
    func_0203f5ec(arg0, -2);
    func_0203eccc(arg0, 0xFFFFD8EF);
    return 0;
}
