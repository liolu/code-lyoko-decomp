#include "m2c.h"

M2C_UNK func_0201f138(M2C_UNK);                     /* extern */
M2C_UNK func_0202a210();                            /* extern */
extern M2C_UNK (*data_020f8154)();
extern s32 data_020f815c;

void func_0201f268(M2C_UNK arg0) {
    if (data_020f815c == 0) {
        func_0202a210();
        if (data_020f8154 != NULL) {
            data_020f8154();
            data_020f8154 = NULL;
        }
    }
    func_0201f138(arg0);
}
