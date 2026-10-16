/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
extern BOOL func_02009904(void *queue, void *msg, s32 flags);
extern void func_0200c31c(u32 chBitMask, u32 capBitMask, u32 alarmBitMask, u32 flags);
extern void func_0200c110(int a, int b, int c, int d);
extern void func_0200c914(int flag);
extern void func_0200c884(u32 tag);
extern u32 func_0200c844(void);
extern void func_0203967c(u32 capBitMask);
extern BOOL func_02039698(u32 chBitMask);
extern void func_02039618(int alarm);
typedef struct UnkSndFader {
    s32 origin;
    s32 target;
    s32 counter;
    s32 frames;
} UnkSndFader;
typedef void (*UnkCaptureCallback)(void *buf0, void *buf1, u32 size, int format, void *arg);
typedef struct UnkSndCapture {
    BOOL active;
    int type;
    int format;
    void *buf0;
    void *buf1;
    u32 bufSize;
    u32 unk_18;
    u32 unk_1c;
    u32 lockedChBitMask;
    u32 chBitMask;
    u32 capBitMask;
    int alarmNo;
    u32 unk_30;
    UnkCaptureCallback callback;
    void *arg;
    UnkSndFader fader;
    BOOL stopAfterFade;
    int volume;
} UnkSndCapture;
typedef struct UnkMessageQueue {
    u8 unk_00[0x20];
} UnkMessageQueue;
extern UnkMessageQueue data_020fd458;
extern UnkSndCapture data_020fd478;
extern void func_0203a924(void);

/* func_020742fc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_capture.c (license: none),
 * reused by tools/donor_match.py */
void func_0203a924(void) {
    UnkSndCapture *capture = &data_020fd478;
    BOOL hasAlarm;

    if (!data_020fd478.active) {
        return;
    }

    hasAlarm = capture->alarmNo >= 0;
    func_0200c31c(capture->chBitMask, capture->capBitMask, hasAlarm ? 1 << capture->alarmNo : 0, 0);

    if (hasAlarm) {
        u32 tag = func_0200c844();
        func_0200c914(1);
        func_0200c884(tag);

        while (func_02009904(&data_020fd458, 0, 0)) {
        }
    }

    if (capture->capBitMask != 0) {
        func_0203967c(capture->capBitMask);
    }
    if (capture->lockedChBitMask != 0) {
        func_02039698(capture->lockedChBitMask);
    }
    if (hasAlarm) {
        func_02039618(capture->alarmNo);
    }
    if (capture->type == 1) {
        func_0200c110(0, 0, 0, 0);
    }

    capture->active = 0;
}
