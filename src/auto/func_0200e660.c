/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

M2C_UNK func_0200b040(void);
void func_0200b054(M2C_UNK);

extern s32 data_020f6448;
extern M2C_UNK data_020f644c;

void func_0200e660(s32 arg0) {
    s32 temp_r0;
    void *temp_r2;
    void *temp_r2_2;

    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        return;
    }
    temp_r0 = func_0200b040();
    temp_r2 = M2C_FIELD(arg0, void **, 4);
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, void **, 8) = (void *) M2C_FIELD(arg0, void **, 8);
    }
    temp_r2_2 = M2C_FIELD(arg0, void **, 8);
    if (temp_r2_2 != NULL) {
        M2C_FIELD(temp_r2_2, void **, 4) = (void *) M2C_FIELD(arg0, void **, 4);
    }
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, void **, 8) = NULL;
    M2C_FIELD(arg0, void **, 4) = (void *) M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) & ~1);
    if (M2C_FIELD(&data_020f644c, s32 *, 0) == arg0) {
        M2C_FIELD(&data_020f644c, s32 *, 8) = 0;
        M2C_FIELD(&data_020f644c, s16 *, 6) = 0;
        M2C_FIELD(&data_020f644c, s32 *, 0) = (s32) data_020f6448;
        M2C_FIELD(&data_020f644c, s16 *, 4) = 0;
    }
    func_0200b054(temp_r0);
}
