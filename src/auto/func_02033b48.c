/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02032d2c(void *);                      /* extern */
M2C_UNK func_020339e8(void *, M2C_UNK);             /* extern */
M2C_UNK func_02033aa4(void *, M2C_UNK);             /* extern */

void func_02033b48(void *arg0, M2C_UNK arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg2;
    M2C_FIELD(arg0, s32 *, 0x34) = -1;
    func_020339e8(arg0 + 0x38, 1);
    func_02032d2c(arg0);
    func_02033aa4(arg0, arg1);
}
