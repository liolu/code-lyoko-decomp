/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OS_Terminate from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_terminate.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
extern u32 func_0200b040(void);
extern void func_0200b2ec(void);
extern void func_0200b2e0(void);
void func_0200b2ec(void) {
    while (1) {
        func_0200b040();
        func_0200b2e0();
    }
}
void func_0200b2e0(void);
