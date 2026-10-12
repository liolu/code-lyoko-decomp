/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK (*data_020f798c)(s32);
extern void *data_020f7994;

void func_02018e80(s32 arg0) {
    if (M2C_FIELD(data_020f7994, u16 *, 6) != 0) {
        return;
    }
    if (data_020f798c != NULL) {
        data_020f798c((arg0 * 0x590) + (s32) (data_020f7994 + 0x4D4));
    }
    M2C_FIELD(data_020f7994, s16 *, 0xC) = 0x16;
    M2C_FIELD(data_020f7994, u16 *, 6) = (u16) (1 << arg0);
    M2C_FIELD(data_020f7994, s16 *, 8) = 0x321;
}
