#include "m2c.h"

s32 func_0208f8e8(M2C_UNK);                         /* extern */
M2C_UNK func_02095c44(s32, M2C_UNK **);             /* extern */
s32 func_020961d0();                                /* extern */
extern M2C_UNK data_020ec868;
extern M2C_UNK data_020efca4;
extern s32 data_02103560;

M2C_UNK **func_02096364(M2C_UNK **arg0) {
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
    return arg0;
}
