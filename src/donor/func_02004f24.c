/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02063920 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
extern u32 data_020ec084;
extern void func_0200b4b8(u32 dmaNo);
extern u32 data_020ec084;
u32 func_02004f24(u32 dmaNo) {
    u32 prev = data_020ec084;
    u32 e;
    if (prev != -1) {
        func_0200b4b8(prev);
    }
    e             = func_0200b040();
    data_020ec084 = dmaNo;
    func_0200b054(e);
    return prev;
}
