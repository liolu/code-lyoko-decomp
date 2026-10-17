/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNS_SndStrmSetChannelVolume from https://github.com/RonyxDumb/mkds src/arm9/0212c8a4_func_0212c8a4.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
typedef enum {
    SND_CHANNEL_DATASHIFT_NONE,
    SND_CHANNEL_DATASHIFT_1BIT,
    SND_CHANNEL_DATASHIFT_2BIT,
    SND_CHANNEL_DATASHIFT_4BIT
} SNDChannelDataShift;
extern void func_0200c24c(u32 chBitMask, int volume, SNDChannelDataShift shift);
extern u16 func_0200cfd0(int dB);
typedef void (*PMSleepCallback)(void *);
typedef struct PMiSleepCallbackInfo PMSleepCallbackInfo;
struct PMiSleepCallbackInfo {
    PMSleepCallback callback;
    void *arg;
    PMSleepCallbackInfo *next;
};
typedef struct {
    void *prevObject;
    void *nextObject;
} NNSFndLink;
typedef enum NNSSndStrmFormat {
    NNS_SND_STRM_FORMAT_PCM8,
    NNS_SND_STRM_FORMAT_PCM16
} NNSSndStrmFormat;
typedef enum NNSSndStrmCallbackStatus {
    NNS_SND_STRM_CALLBACK_SETUP,
    NNS_SND_STRM_CALLBACK_INTERVAL
} NNSSndStrmCallbackStatus;
typedef void (*NNSSndStrmCallback)(NNSSndStrmCallbackStatus status, int numChannles, void *buffer[], u32 len,
                                   NNSSndStrmFormat format, void *arg);
typedef struct NNSSndStrm {
    NNSFndLink link;
    PMSleepCallbackInfo preSleepInfo;
    PMSleepCallbackInfo postSleepInfo;
    NNSSndStrmFormat format;
    BOOL activeFlag : 1;
    BOOL startFlag : 1;
    u32 chBufLen;
    int interval;
    NNSSndStrmCallback callback;
    void *callbackArg;
    int curBuffer;
    int volume;
    int alarmNo;
    u32 chBitMask;
    int numChannels;
    u8 channelNo[16];
} NNSSndStrm;
extern void func_0203a3f8(NNSSndStrm *stream, int chNo, int volume);
typedef struct NNSSndStrmChannel {
    void *buffer;
    int volume;
} NNSSndStrmChannel;
extern NNSSndStrmChannel data_020fd3d4[16];
void func_0203a3f8(NNSSndStrm *stream, int chNo, int volume) {
    u16 chVolume;
    int vol;

    ((void) 0);

    if (chNo > stream->numChannels - 1) {
        return;
    }

    chNo                       = stream->channelNo[chNo];
    data_020fd3d4[chNo].volume = volume;

    vol      = stream->volume + data_020fd3d4[chNo].volume;
    chVolume = func_0200cfd0(vol);

    func_0200c24c((u32) (1 << chNo), chVolume & 0xff, (SNDChannelDataShift) (chVolume >> 8));
}
