/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
extern u32 func_020054c0();
extern void func_020084bc();
extern u32 data_020f4444;
extern u32 data_020f445c;
extern u32 data_020f4458;
extern s32 data_020f4454;
extern const struct {
    u16 blk1;
    u16 blk2;
    u16 szBlk1;
} data_020e881c[16];

/* func_0214c6a8 from https://github.com/RonyxDumb/mkds src/arm9/0214c6a8_func_0214c6a8.c (license: none), reused by
 * tools/donor_match.py */
void func_020084bc() {
    u32 temp      = func_020054c0();
    data_020f4454 = (s32) temp;
    data_020f4444 = (u32) (data_020e881c[temp].blk1 << 0xC);
    data_020f4458 = (u32) (data_020e881c[temp].blk2 << 0xC);
    data_020f445c = (u32) (data_020e881c[temp].szBlk1 << 0xC);
}
