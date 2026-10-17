/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Ov105_WM_GetNextTgid from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/wm/calls/Ov105_WM_GetNextTgid.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
typedef struct RTCTime {
    u32 hour;
    u32 minute;
    u32 second;
} RTCTime;
extern void func_0201247c(void);
extern int func_020123bc(RTCTime *time);
extern u32 data_020ec0b0;
u16 func_02014820(void) {
    enum {
        TGID_DEFAULT = (1 << 16)
    };

    if (data_020ec0b0 == (u32) TGID_DEFAULT) {
        RTCTime rt[1];
        func_0201247c();
        if (func_020123bc(rt) == 0) {
            data_020ec0b0 = (u16) (rt->second + (rt->minute << 8));
        }
    }

    data_020ec0b0 = (u16) (data_020ec0b0 + 1);
    return (u16) data_020ec0b0;
}
