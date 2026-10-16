/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207bc58 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/spi/pm.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef s32 BOOL;
extern void func_0200b0a4(u32 count);
typedef void (*UnkPmCallback)(u32 result, void *arg);
extern u32 func_020119c8(u32 data, UnkPmCallback callback, void *arg);
extern u32 func_020117a4(u32 target, u32 on);
extern u32 func_02011640(BOOL *top, BOOL *bottom);
extern BOOL func_020112c0(u32 sw);
extern u32 func_020112a4(void);
u32 func_020119c8(u32 data, UnkPmCallback callback, void *arg);
u32 func_020117a4(u32 target, u32 on);
u32 func_020116f4(UnkPmCallback callback, void *arg) {
    BOOL top;
    BOOL bottom;

    func_0200b0a4(0x996a00);
    if (func_020112a4() != 1) {
        func_02011640(&top, &bottom);
        if (top) {
            func_020117a4(0, 0);
        }
        if (bottom) {
            func_020117a4(1, 0);
        }
        while (!func_020112c0(1)) {
            func_0200b0a4(0x996a00);
        }
    }
    return func_020119c8(14, callback, arg);
}
u32 func_02011640(BOOL *top, BOOL *bottom);
BOOL func_020112c0(u32 sw);
u32 func_020112a4(void);
