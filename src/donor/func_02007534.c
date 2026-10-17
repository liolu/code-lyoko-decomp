/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0214b720 from https://github.com/RonyxDumb/mkds src/arm9/0214b720_func_0214b720.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
extern u32 func_020054f8();
extern void func_02007534();
extern s32 data_020f4438;
extern u32 data_020f4434;
extern u32 data_020f4430;
#pragma thumb off
void func_02007534() {
    data_020f4438 = (s32) func_020054f8();
    switch (data_020f4438) {
        case 0:
            break;
        case 0x10:
            data_020f4434 = 0x06880000;
            data_020f4430 = 0x0;
            break;
        case 0x40:
            data_020f4434 = 0x06894000;
            data_020f4430 = 0x4000;
            break;
        case 0x20:
        case 0x60:
            data_020f4434 = 0x06890000;
            data_020f4430 = 0x0;
            break;
    }
}
