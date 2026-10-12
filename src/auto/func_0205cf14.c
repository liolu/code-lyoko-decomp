#include "m2c.h"

M2C_UNK func_0203f68c(s32, M2C_UNK);                /* extern */
M2C_UNK func_0203f760(s32, M2C_UNK *);              /* extern */
M2C_UNK func_02040588(s32);                         /* extern */
s32 func_02044f8c();                                /* extern */
M2C_UNK func_02046364(s32);                         /* extern */
M2C_UNK func_020499b0(s32);                         /* extern */
M2C_UNK func_0205d330(void *);                      /* extern */
extern M2C_UNK data_020ede54;
extern M2C_UNK func_0205c24c;

void *func_0205cf14(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ede54;
    M2C_FIELD(arg0, volatile s32 *, 4) = 0;
    M2C_FIELD(arg0, volatile s8 *, 8) = 1;
    M2C_FIELD(arg0, volatile s32 *, 0xC) = 0;
    M2C_FIELD(arg0, volatile s8 *, 0x10) = 0;
    func_0205d330(arg0 + 0x14);
    M2C_FIELD(arg0, volatile s32 *, 4) = func_02044f8c();
    func_02040588(M2C_FIELD(arg0, volatile s32 *, 4));
    func_0203f68c(M2C_FIELD(arg0, volatile s32 *, 4), 0);
    func_02046364(M2C_FIELD(arg0, volatile s32 *, 4));
    func_0203f68c(M2C_FIELD(arg0, volatile s32 *, 4), 0);
    func_020499b0(M2C_FIELD(arg0, volatile s32 *, 4));
    func_0203f68c(M2C_FIELD(arg0, volatile s32 *, 4), 0);
    func_0203f760(M2C_FIELD(arg0, volatile s32 *, 4), &func_0205c24c);
    return arg0;
}
