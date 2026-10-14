/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK (*data_020f7988)();
extern void *data_020f7994;

void func_02018e10(void) {
    if (M2C_FIELD(data_020f7994, u16 *, 6) == 0) {
        return;
    }
    if (data_020f7988 != NULL) {
        data_020f7988();
    }
    M2C_FIELD(data_020f7994, s16 *, 0xC) = 1;
    M2C_FIELD(data_020f7994, u16 *, 6)   = 0U;
    M2C_FIELD(data_020f7994, s16 *, 0xA) = 0;
}
