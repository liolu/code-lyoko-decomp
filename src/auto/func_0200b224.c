/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
extern u32 func_0200b040(void);
extern u32 func_0200b054(u32 state);
extern u32 data_020f4828;
extern u16 data_020f482c[9];
u32 func_0200b21c(register u32 value);

/* func_02079f00 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_vramexclusive.c (license: none),
 * reused by tools/donor_match.py */
void func_0200b224(u32 bank, u16 lockID) {
    u32 mask;
    u32 enabled = func_0200b040();

    mask = bank & data_020f4828 & 0x1ff;

    while (1) {
        s32 i = 31 - func_0200b21c(mask);
        if (i < 0) {
            break;
        }
        mask &= ~(1 << i);
        if (data_020f482c[i] == lockID) {
            data_020f482c[i] = 0;
            data_020f4828 &= ~(1 << i);
        }
    }
    func_0200b054(enabled);
}
