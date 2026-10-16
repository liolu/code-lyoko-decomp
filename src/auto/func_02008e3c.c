/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200b040();
M2C_UNK func_0200b054();
extern u32 data_020f44c8;

u32 func_02008e3c(void) {
    M2C_UNK m2c_irq;
    M2C_UNK saved_reg_r4;
    u32 var_r4;

    var_r4  = saved_reg_r4;
    m2c_irq = func_0200b040();
    if ((u32) data_020f44c8 < -1U) {
        var_r4 = data_020f44c8;
        data_020f44c8 += 1;
    }
    func_0200b054(m2c_irq);
    return var_r4;
}
