/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020087dc(M2C_UNK);                     /* extern */
M2C_UNK func_0200896c(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_0200a8dc(M2C_UNK);                     /* extern */
extern u16 data_020f47f0;
extern s32 data_020f47f4;
extern M2C_UNK data_020f47f8;
extern M2C_UNK func_0200a9a8;

void func_0200aa30(void) {
    if (data_020f47f0 != 0) {
        return;
    }
    data_020f47f0 = 1;
    func_0200a8dc(0);
    M2C_FIELD(&data_020f47f8, s32 *, 0) = 0;
    M2C_FIELD(&data_020f47f8, s32 *, 4) = 0;
    *(s16 *)0x04000102 = 0;
    *(s16 *)0x04000100 = 0;
    *(s16 *)0x04000102 = 0xC1;
    func_0200896c(8, &func_0200a9a8);
    func_020087dc(8);
    data_020f47f4 = 0;
}
