#include "m2c.h"

s32 func_0208f8e8(M2C_UNK);                         /* extern */
M2C_UNK func_02095c44(s32, M2C_UNK **);             /* extern */
s32 func_020961d0();                                /* extern */
M2C_UNK func_020993b0(M2C_UNK *, M2C_UNK **, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_020ec868;
extern M2C_UNK data_020efca4;
extern s32 data_02103560;
extern M2C_UNK data_02103570;

M2C_UNK **func_020962e4(M2C_UNK **arg0) {
    s32 var_r0;

    *arg0 = &data_020efca4;
    if (data_02103560 == 0) {
        var_r0 = func_0208f8e8(0x30);
        if (var_r0 != 0) {
            var_r0 = func_020961d0();
        }
        data_02103560 = var_r0;
    }
    func_02095c44(data_02103560, arg0);
    *arg0 = &data_020ec868;
    func_020993b0(&data_02103570, arg0, 0x44, 0x44);
    return arg0;
}
