/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02014df8(s32);                         /* extern */
s32 func_02015418(s32, s32, u16);                   /* extern */
M2C_UNK func_0201a674(M2C_UNK);                     /* extern */
M2C_UNK func_0201c1d8();                            /* extern */
extern u16 data_020f7b00;
extern s32 data_020f7b04;
extern void *data_020f7b08;
extern void *data_020f7b0c;

s32 func_0201ab78(void) {
    s32 temp_r0;

    M2C_FIELD(data_020f7b08, s16 *, 0x528) = 0;
    M2C_FIELD(data_020f7b08, s16 *, 0x52A) = 0;
    M2C_FIELD(data_020f7b08, s16 *, 0x526) = 0;
    M2C_FIELD(data_020f7b08, s16 *, 0x548) = 0;
    func_0201a674(0xA);
    if (M2C_FIELD(data_020f7b0c, s32 *, 0x1320) == 0) {
        do {
            temp_r0 = func_02015418(data_020f7b04, M2C_FIELD(data_020f7b08, s32 *, 0x508), data_020f7b00);
        } while (temp_r0 == 4);
        if (temp_r0 != 2) {
            return 8;
        }
        func_02014df8(M2C_FIELD(data_020f7b08, s32 *, 0x508));
        M2C_FIELD(data_020f7b08, s8 *, 0x50D) = 1;
        return 0;
    }
    func_02014df8(M2C_FIELD(data_020f7b08, s32 *, 0x508));
    M2C_FIELD(data_020f7b08, s8 *, 0x50D) = 1;
    func_0201c1d8();
    return 0;
}
