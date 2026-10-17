#include "m2c.h"

M2C_UNK func_0202f218(M2C_UNK *);                   /* extern */
M2C_UNK func_0202f5d8(M2C_UNK *);                   /* extern */
M2C_UNK func_0202f65c(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_02031c0c(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
s8 func_0205e174(void *, M2C_UNK *, M2C_UNK *, void *); /* extern */
s32 func_0208f8e8(M2C_UNK);                         /* extern */
M2C_UNK func_02095994(s32, void *);                 /* extern */
s32 func_020961d0();                                /* extern */
extern M2C_UNK data_020edfec;
extern M2C_UNK data_020edff6;
extern M2C_UNK data_020edffd;
extern M2C_UNK data_020ee004;
extern s32 data_02103560;

s32 func_0205e294(void *arg0) {
    u8 sp24[16];
    u8 sp18[12];
    u8 spC[12];
    u8 sp0[12];
    s32 var_r0;
    s8 temp_r5;

    func_0202f218(sp0);
    func_02031c0c(sp0, 0, 0, &data_020edfec);
    func_0202f65c(spC, sp0);
    temp_r5 = func_0205e174(arg0, spC, &data_020edff6, arg0 + 0x28);
    func_0202f5d8(spC);
    if (temp_r5 != 0) {
        M2C_FIELD(arg0, s8 *, 0x38) = 0;
        func_0202f65c(sp18, sp0);
        M2C_FIELD(arg0, s8 *, 0x39) = func_0205e174(arg0, sp18, &data_020edffd, arg0 + 0x30);
        func_0202f5d8(sp18);
        func_0202f65c(sp24, sp0);
        M2C_FIELD(arg0, s8 *, 0x3A) = func_0205e174(arg0, sp24, &data_020ee004, arg0 + 0x34);
        func_0202f5d8(sp24);
        if (M2C_FIELD(arg0, u8 *, 0x49) != 0) {
            if (data_02103560 == 0) {
                var_r0 = func_0208f8e8(0x30);
                if (var_r0 != 0) {
                    var_r0 = func_020961d0();
                }
                data_02103560 = var_r0;
            }
            func_02095994(data_02103560, arg0);
        }
        func_0202f5d8(sp0);
        return 1;
    }
    func_0202f5d8(sp0);
    return 0;
}
