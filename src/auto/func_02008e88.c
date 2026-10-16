/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200b040();
M2C_UNK func_0200b054();
extern M2C_UNK data_020f44dc;

s32 func_02008e88(s32 arg0) {
    M2C_UNK m2c_irq;
    s32 temp_r4;

    m2c_irq                               = func_0200b040();
    temp_r4                               = M2C_FIELD(&data_020f44dc, s32 *, 0xC);
    M2C_FIELD(&data_020f44dc, s32 *, 0xC) = arg0;
    func_0200b054(m2c_irq);
    return temp_r4;
}
