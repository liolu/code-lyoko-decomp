/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
extern u32 data_020ec084;
extern void func_0200b79c(u32 dmaNo, void *dest, u32 data, u32 size);
extern void func_0200bbb0(u32 data, void *dest, u32 size);
extern void func_020068e8(void);
extern void func_0200b5d0(u32 dmaNo, void *dest, u32 data, u32 size, void (*callback)(void *), void *arg);

/* func_02065444 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/g3x.c (license: none), reused by
 * tools/donor_match.py */
void func_020068e8(void) {
    s32 i;

    if (data_020ec084 != -1) {
        func_0200b5d0(data_020ec084, (void *) 0x04000330, 0, 0x10, 0, 0);
        func_0200b79c(data_020ec084, (void *) 0x04000360, 0, 0x60);
    } else {
        func_0200bbb0(0, (void *) 0x04000330, 0x10);
        func_0200bbb0(0, (void *) 0x04000360, 0x60);
    }
    for (i = 0; i < 0x20; i++) {
        (*(vu32 *) 0x040004d0) = 0;
    }
}
