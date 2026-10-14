/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02032d04();                         /* extern */

void func_02032d2c(void *arg0) {
    func_02032d04(arg0 + 0x1C);
    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s32 *, 4)    = 0;
    M2C_FIELD(arg0, s32 *, 8)    = 1;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}
