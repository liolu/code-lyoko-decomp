#include "m2c.h"

s32 func_0208f8e8(M2C_UNK);                         /* extern */
M2C_UNK func_020c5f80(s32, s32, s32);               /* extern */
s32 func_020c6568();                                /* extern */
M2C_UNK func_ov001_02125220(void *);                /* extern */
extern M2C_UNK data_020f1b9c;
extern M2C_UNK data_020f1bd0;
extern void **data_020ff650;
extern s32 data_0210ad6c;

void *func_020c2e9c(void *arg0) {
    s32 var_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020f1b9c;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &data_020f1bd0;
    if (M2C_FIELD(arg0, s32 *, 0x38) != M2C_FIELD(*data_020ff650, s32(**)(), 0x54)(data_020ff650)) {
        if (data_0210ad6c == 0) {
            var_r0 = func_0208f8e8(0x1A8);
            if (var_r0 != 0) {
                var_r0 = func_020c6568();
            }
            data_0210ad6c = var_r0;
        }
        func_020c5f80(data_0210ad6c, M2C_FIELD(arg0, s32 *, 0x38), 0x199);
        M2C_FIELD(arg0, s32 *, 0x38) = M2C_FIELD(*data_020ff650, s32(**)(), 0x54)(data_020ff650);
    }
    func_ov001_02125220(arg0);
    return arg0;
}
