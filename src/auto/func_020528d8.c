#include "m2c.h"

M2C_UNK func_02052ac0();                            /* extern */
u32 func_02052b98(s32);                             /* extern */
M2C_UNK func_02052ba0();                            /* extern */
u32 func_02052c78(s32);                             /* extern */
M2C_UNK func_02052c80();                            /* extern */
u32 func_02052d58(s32);                             /* extern */
M2C_UNK func_02052d60();                            /* extern */
u32 func_02052e38(s32);                             /* extern */
M2C_UNK func_02052e40();                            /* extern */
u32 func_02052f18(s32);                             /* extern */
M2C_UNK func_02052f20();                            /* extern */
u32 func_02052ff8(s32);                             /* extern */
M2C_UNK func_02053000();                            /* extern */
u32 func_020530d8(s32);                             /* extern */
u32 func_020530e0(M2C_UNK);                         /* extern */
s32 func_020530ec(M2C_UNK);                         /* extern */
M2C_UNK func_020591cc(s32, u32);                    /* extern */
M2C_UNK func_02059268(s32, u32);                    /* extern */
M2C_UNK func_02059304(s32, u32);                    /* extern */
M2C_UNK func_020593a0(s32, u32);                    /* extern */
M2C_UNK func_0205943c(s32, u32);                    /* extern */
M2C_UNK func_020594d8(s32, u32);                    /* extern */
M2C_UNK func_02059574(s32, u32);                    /* extern */
s32 func_020596a4();                                /* extern */
s32 func_02059704();                                /* extern */
s32 func_02059764();                                /* extern */
s32 func_020597c4();                                /* extern */
s32 func_02059824();                                /* extern */
s32 func_02059884();                                /* extern */
s32 func_020598e4();                                /* extern */

void func_020528d8(s32 arg0, M2C_UNK arg1) {
    s32 temp_r5_7;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_r6_3;
    s32 temp_r6_4;
    s32 temp_r6_5;
    s32 temp_r6_6;
    u32 temp_r4;
    u32 temp_r5;
    u32 temp_r5_2;
    u32 temp_r5_3;
    u32 temp_r5_4;
    u32 temp_r5_5;
    u32 temp_r5_6;

    temp_r6 = func_020596a4();
    if (func_020530ec(arg1) != 0) {
        temp_r5 = func_020530e0(arg1);
        if (temp_r5 < func_020530d8(temp_r6 + 8)) {
            func_02059304(temp_r6 + 8, temp_r5);
            func_02053000();
        }
    }
    temp_r6_2 = func_02059824();
    if (func_020530ec(arg1) != 0) {
        temp_r5_2 = func_020530e0(arg1);
        if (temp_r5_2 < func_02052ff8(temp_r6_2 + 8)) {
            func_020591cc(temp_r6_2 + 8, temp_r5_2);
            func_02052f20();
        }
    }
    temp_r6_3 = func_020597c4();
    if (func_020530ec(arg1) != 0) {
        temp_r5_3 = func_020530e0(arg1);
        if (temp_r5_3 < func_02052f18(temp_r6_3 + 8)) {
            func_02059268(temp_r6_3 + 8, temp_r5_3);
            func_02052e40();
        }
    }
    temp_r6_4 = func_02059704();
    if (func_020530ec(arg1) != 0) {
        temp_r5_4 = func_020530e0(arg1);
        if (temp_r5_4 < func_02052e38(temp_r6_4 + 8)) {
            func_02059574(temp_r6_4 + 8, temp_r5_4);
            func_02052d60();
        }
    }
    temp_r6_5 = func_02059884();
    if (func_020530ec(arg1) != 0) {
        temp_r5_5 = func_020530e0(arg1);
        if (temp_r5_5 < func_02052d58(temp_r6_5 + 8)) {
            func_020593a0(temp_r6_5 + 8, temp_r5_5);
            func_02052c80();
        }
    }
    temp_r6_6 = func_02059764();
    if (func_020530ec(arg1) != 0) {
        temp_r5_6 = func_020530e0(arg1);
        if (temp_r5_6 < func_02052c78(temp_r6_6 + 8)) {
            func_0205943c(temp_r6_6 + 8, temp_r5_6);
            func_02052ba0();
        }
    }
    temp_r5_7 = func_020598e4();
    if (func_020530ec(arg1) == 0) {
        return;
    }
    temp_r4 = func_020530e0(arg1);
    if (temp_r4 >= func_02052b98(temp_r5_7 + 8)) {
        return;
    }
    func_020594d8(temp_r5_7 + 8, temp_r4);
    func_02052ac0();
}
