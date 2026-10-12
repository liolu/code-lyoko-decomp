/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02031e10(M2C_UNK *, void *);           /* extern */
M2C_UNK func_02039618(s32);                         /* extern */
extern M2C_UNK data_020fd388;

void func_0203a300(void *arg0) {
    func_02039618(M2C_FIELD(arg0, s32 *, 0x40));
    func_02031e10(&data_020fd388, arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
}
