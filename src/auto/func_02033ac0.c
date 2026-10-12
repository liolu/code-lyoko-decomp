/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02032d2c(void *);                      /* extern */
M2C_UNK func_020339e8(void *, M2C_UNK);             /* extern */
M2C_UNK func_02033aa4(void *, M2C_UNK);             /* extern */
M2C_UNK func_0203583c(s32, s32, s32, s32, s32, s32, s32, s32); /* extern */

void func_02033ac0(void *arg0, M2C_UNK arg1, void *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9) {
    func_0203583c(arg3, arg4, arg5, arg6, *M2C_FIELD(arg2, s32 **, 0xC), arg7, arg8, arg9);
    M2C_FIELD(arg0, s32 *, 0x34) = arg3;
    M2C_FIELD(arg0, void **, 0x30) = arg2;
    M2C_FIELD(arg0, s32 *, 0x34) = arg3;
    func_020339e8(arg0 + 0x38, 1);
    func_02032d2c(arg0);
    func_02033aa4(arg0, arg1);
}
