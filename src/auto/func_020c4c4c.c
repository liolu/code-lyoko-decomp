#include "m2c.h"

s32 func_020525f8();                        /* extern */
s32 func_02052608();                        /* extern */
s32 func_02058258();                                /* extern */
M2C_UNK func_0208f870();                         /* extern */
s32 func_0208f8e8();                             /* extern */
M2C_UNK func_02094e68();                    /* extern */
M2C_UNK func_02099020();           /* extern */
extern s32 data_020fe44c;

void *func_020c4c4c(void *arg0) {
    s32 var_r0;
    s32 var_r0_2;

    if (M2C_FIELD(arg0, s32 *, 0x50) != -1) {
        if (data_020fe44c == 0) {
            var_r0 = func_0208f8e8(0x2848);
            if (var_r0 != 0) {
                var_r0 = func_02058258();
            }
            data_020fe44c = var_r0;
        }
        func_02094e68(func_02052608(data_020fe44c, M2C_FIELD(arg0, s32 *, 0x44)), M2C_FIELD(arg0, s32 *, 0x50));
        M2C_FIELD(arg0, s32 *, 0x50) = -1;
    }
    if (M2C_FIELD(arg0, u16 *, 0xA0) != 0xFFFF) {
        if (data_020fe44c == 0) {
            var_r0_2 = func_0208f8e8(0x2848);
            if (var_r0_2 != 0) {
                var_r0_2 = func_02058258();
            }
            data_020fe44c = var_r0_2;
        }
        func_02099020(func_020525f8(data_020fe44c, M2C_FIELD(arg0, s32 *, 0x44)), M2C_FIELD(arg0, u16 *, 0xA0), 0);
        M2C_FIELD(arg0, u16 *, 0xA0) = 0xFFFFU;
    }
    func_0208f870(M2C_FIELD(arg0, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, u8 *, 0x5C) = (u8) (M2C_FIELD(arg0, u8 *, 0x5C) & ~1);
    M2C_FIELD(arg0, u8 *, 0x9C) = (u8) (M2C_FIELD(arg0, u8 *, 0x9C) & ~2);
    if (M2C_FIELD(arg0, s32 *, 0x98) != 0) {
        func_0208f870();
    }
    return arg0;
}
