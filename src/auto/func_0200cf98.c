/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02009cd8(void *, M2C_UNK);             /* extern */
extern void *data_020f63c0;

s32 func_0200cf98(void) {
    func_02009cd8(data_020f63c0 + 4, 4);
    return M2C_FIELD(data_020f63c0, s32 *, 4);
}
