/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200d48c();                            /* extern */
s32 func_0200d670(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0200d698(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_020f64d0;
extern M2C_UNK data_020f64d4;
extern M2C_UNK func_02010e94;

void func_02010e04(void) {
    if (data_020f64d0 != 0) {
        return;
    }
    data_020f64d0 = 1;
    func_0200d48c();
    M2C_FIELD(&data_020f64d4, s16 *, 0x32) = 0;
    M2C_FIELD(&data_020f64d4, s16 *, 0x36) = 0;
    M2C_FIELD(&data_020f64d4, s16 *, 0xC)  = 0;
    M2C_FIELD(&data_020f64d4, s32 *, 0)    = 0;
    M2C_FIELD(&data_020f64d4, s32 *, 0x10) = 0;
    M2C_FIELD(&data_020f64d4, s16 *, 0x30) = 0;
    M2C_FIELD(&data_020f64d4, s16 *, 0x34) = 0;
    do {

    } while (func_0200d670(6, 1) == 0);
    func_0200d698(6, &func_02010e94);
}
