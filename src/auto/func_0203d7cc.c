/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02009090();                      /* extern */
M2C_UNK func_020092d8(); /* extern */
M2C_UNK func_02009c88();                      /* extern */
M2C_UNK func_02031ff4();             /* extern */
extern M2C_UNK func_0203c880;

void func_0203d7cc(void *arg0, s32 arg1) {
    func_020092d8(arg0, &func_0203c880, arg0, arg0 + 0x4C0, 0x400, arg1);
    func_02031ff4(arg0 + 0x4E0, 0);
    func_02009c88(arg0 + 0x4C8);
    M2C_FIELD(arg0, s32 *, 0x4C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C0) = (s32) M2C_FIELD(arg0, s32 *, 0x4C4);
    func_02009090(arg0);
}
