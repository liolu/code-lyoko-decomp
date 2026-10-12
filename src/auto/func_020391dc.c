/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02038d5c(M2C_UNK *, M2C_UNK *, M2C_UNK, s32); /* extern */
s32 func_02038dd0(s32, u32);                        /* extern */
M2C_UNK func_02038e20(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020fa68c;
extern M2C_UNK data_020fa690;

void func_020391dc(void) {
    M2C_FIELD(&data_020fa68c, s32 *, 4) = func_02038dd0(M2C_FIELD(&data_020fa68c, s32 *, 0xC), (u32) M2C_FIELD(&data_020fa68c, u32 *, 0x10) >> 4);
    func_02038e20(&data_020fa68c);
    func_02038d5c(&data_020fa68c, &data_020fa690, 0, M2C_FIELD(&data_020fa68c, s32 *, 8));
}
