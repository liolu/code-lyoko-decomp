/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200d48c();                            /* extern */
s32 func_0200d670(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0200d698(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_0201e84c(M2C_UNK);                     /* extern */
M2C_UNK func_0201eb98();                            /* extern */
M2C_UNK func_0201ecc8();                            /* extern */
M2C_UNK func_0201f064(M2C_UNK *);                   /* extern */
extern s32 data_020f7b74;
extern s32 data_020f7b78;
extern s32 data_020f7b7c;
extern M2C_UNK data_020f7c40;
extern M2C_UNK func_0201ebd8;
extern M2C_UNK func_0201ec0c;
extern M2C_UNK func_0201ec8c;

void func_0201ee94(void) {
    if (data_020f7b74 != 0) {
        return;
    }
    data_020f7b74 = 1;
    func_0201eb98();
    data_020f7b78 = 0;
    func_0200d48c();
    do {

    } while (func_0200d670(0xD, 1) == 0);
    func_0200d698(0xD, &func_0201ec8c);
    func_0201ecc8();
    func_0200d698(0xD, NULL);
    func_0200d698(0xD, &func_0201ec0c);
    data_020f7b7c = 0;
    func_0201f064(&data_020f7c40);
    func_0200d698(0x11, &func_0201ebd8);
    func_0201e84c(0);
}
