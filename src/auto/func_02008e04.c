/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200b040();
M2C_UNK func_0200b054();
extern s32 data_020f44c8;

s32 func_02008e04(void) {
    M2C_UNK m2c_irq;
    s32 var_r4;

    m2c_irq = func_0200b040();
    var_r4  = 0;
    if (data_020f44c8 != 0) {
        var_r4 = data_020f44c8;
        data_020f44c8 -= 1;
    }
    func_0200b054(m2c_irq);
    return var_r4;
}
