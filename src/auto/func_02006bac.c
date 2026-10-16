/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02065200 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/g3x.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef volatile u32 vu32;
extern void func_02006bac(void);
extern void func_020067fc(volatile void *fifo);
void func_02006bac(void) {
    func_020067fc(((vu32 *) 0x04000400));
    while ((*(vu32 *) 0x04000600) & 0x8000000) {
    }
}
void func_020067fc(register volatile void *fifo);
