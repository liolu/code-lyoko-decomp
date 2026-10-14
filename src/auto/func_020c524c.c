#include "m2c.h"

M2C_UNK func_0205c510(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_0205c6c4(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_0205ce50(M2C_UNK *);                   /* extern */
M2C_UNK func_0205cf14(M2C_UNK *);                   /* extern */
M2C_UNK func_02087cb4(M2C_UNK *);                   /* extern */
M2C_UNK func_020c91b0(M2C_UNK *, M2C_UNK *, s32);   /* extern */
extern M2C_UNK data_020f1c98;
extern M2C_UNK data_020f1ca0;
extern M2C_UNK data_020f1ca7;

void func_020c524c(s32 arg0, M2C_UNK arg1, u32 arg2) {
    u8 sp24[20];
    u8 sp0[36];

    func_0205cf14(sp0);
    func_0205c6c4(sp0, &data_020f1c98);
    func_0205c510(sp24, sp0, arg1);
    switch (arg2) {
        default:
            break;
        case 2:
            func_020c91b0(sp24, &data_020f1ca0, arg0 + 0x34);
            func_020c91b0(sp24, &data_020f1ca7, arg0 + 0x54);
            break;
        case 0:
            func_020c91b0(sp24, &data_020f1ca0, arg0 + 0x30);
            func_020c91b0(sp24, &data_020f1ca7, arg0 + 0x50);
            break;
        case 1:
            func_020c91b0(sp24, &data_020f1ca0, arg0 + 0x38);
            func_020c91b0(sp24, &data_020f1ca7, arg0 + 0x58);
            break;
        case 3:
            func_020c91b0(sp24, &data_020f1ca0, arg0 + 0x3C);
            func_020c91b0(sp24, &data_020f1ca7, arg0 + 0x5C);
            break;
    }
    func_02087cb4(sp24);
    func_0205ce50(sp0);
}
