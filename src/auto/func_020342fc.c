/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02034728(M2C_UNK);
M2C_UNK func_02035ba0(void);
void func_02035bb0(M2C_UNK);
void func_02035bc0(void);
void func_02035bd4(M2C_UNK);

extern void *data_020f96b0;

void func_020342fc(s32 arg0) {
    s32 temp_r4;

    if (M2C_FIELD(data_020f96b0, s32 *, 0x80) != 0) {
        temp_r4 = func_02035ba0();
        func_02035bd4(1);
        func_02035bb0(M2C_FIELD(data_020f96b0, s32 *, 0x80));
        func_02034728(arg0);
        func_02035bd4(0);
        func_02035bb0(temp_r4);
        func_02035bc0();
        return;
    }
    func_02034728(arg0);
}
