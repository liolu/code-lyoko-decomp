#include "m2c.h"

M2C_UNK func_0200bec0();                            /* extern */
M2C_UNK func_0200bed8();                            /* extern */
s32 func_020133b0();                                /* extern */
s32 func_0208ebd4();                                /* extern */
s32 func_0208f8e8(M2C_UNK);                         /* extern */
M2C_UNK func_020993b0(M2C_UNK *, s32, M2C_UNK, M2C_UNK); /* extern */
s32 func_02099488(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
extern s32 data_020ff550;
extern s32 data_021033e0;
extern s32 data_021033e4;
extern M2C_UNK data_0210345c;
extern M2C_UNK data_02103494;

void func_0208e6e4(void) {
    s32 temp_r4;
    s32 var_r0;

    if (data_021033e0 == 0) {
        var_r0 = func_0208f8e8(0xD8);
        if (var_r0 != 0) {
            var_r0 = func_0208ebd4();
        }
        data_021033e0 = var_r0;
    }
    data_020ff550 = data_021033e0;
    func_020993b0(&data_02103494, func_02099488(&data_02103494, 0x58, 0x58), 0x58, 0x58);
    func_020993b0(&data_0210345c, func_02099488(&data_0210345c, 0x24, 0x24), 0x24, 0x24);
    func_0200bed8();
    temp_r4 = func_020133b0();
    func_0200bec0();
    data_021033e4 = temp_r4;
}
