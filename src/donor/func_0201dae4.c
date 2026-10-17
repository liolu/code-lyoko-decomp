/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* MBi_WMStateOutReset from https://github.com/ntrtwl/NitroSDK libraries/mb/src/mb_wm.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
typedef enum WMErrCode {
    WM_ERRCODE_SUCCESS            = 0,
    WM_ERRCODE_FAILED             = 1,
    WM_ERRCODE_OPERATING          = 2,
    WM_ERRCODE_ILLEGAL_STATE      = 3,
    WM_ERRCODE_WM_DISABLE         = 4,
    WM_ERRCODE_NO_KEYSET          = 5,
    WM_ERRCODE_NO_DATASET         = 5,
    WM_ERRCODE_INVALID_PARAM      = 6,
    WM_ERRCODE_NO_CHILD           = 7,
    WM_ERRCODE_FIFO_ERROR         = 8,
    WM_ERRCODE_TIMEOUT            = 9,
    WM_ERRCODE_SEND_QUEUE_FULL    = 10,
    WM_ERRCODE_NO_ENTRY           = 11,
    WM_ERRCODE_OVER_MAX_ENTRY     = 12,
    WM_ERRCODE_INVALID_POLLBITMAP = 13,
    WM_ERRCODE_NO_DATA            = 14,
    WM_ERRCODE_SEND_FAILED        = 15,
    WM_ERRCODE_DCF_TEST,
    WM_ERRCODE_WL_INVALID_PARAM,
    WM_ERRCODE_WL_LENGTH_ERR,
    WM_ERRCODE_FLASH_ERROR,
    WM_ERRCODE_MAX
} WMErrCode;
typedef struct WMCallback {
    u16 apiid;
    u16 errcode;
    u16 wlCmdID;
    u16 wlResult;
} WMCallback;
extern const u16(*ctrdgi_fl_maxtime);
typedef struct {
    u16 apiid;
    u16 errcode;
} MBErrorCallback;
typedef void (*MBWMCallbackFunc)(u16 type, void *arg);
typedef struct {
    MBWMCallbackFunc mpCallback;
    u32 *sendBuf;
    u32 *recvBuf;
    BOOL start_mp_busy;
    u16 sendBufSize;
    u16 recvBufSize;
    u16 pSendLen;
    u16 pRecvLen;
    u16 blockSizeMax;
    u16 mpStarted;
    u16 endReq;
    u16 child_bitmap;
    u16 mpBusy;
    u8 _padding[2];
} MBWMWork;
extern void func_0201dae4(void *arg);
extern void MBi_WMSendCallback(u16 type, void *arg);
extern void MBi_WMErrorCallback(u16 apiid, u16 error_code);
extern MBWMWork *data_020f7b4c;
void func_0201dae4(void *arg) {
    WMCallback *cb = (WMCallback *) arg;

    if (cb->errcode != WM_ERRCODE_SUCCESS) {
        MBi_WMErrorCallback(cb->apiid, cb->errcode);
        return;
    }

    MBi_WMSendCallback(15, 0);
}
static inline void MBi_WMSendCallback(u16 type, void *arg) {
    if (data_020f7b4c->mpCallback == 0) {
        return;
    }

    data_020f7b4c->mpCallback(type, arg);
}
static inline void MBi_WMErrorCallback(u16 apiid, u16 error_code) {
    MBErrorCallback arg;

    if (data_020f7b4c->mpCallback == 0) {
        return;
    }

    arg.apiid   = apiid;
    arg.errcode = error_code;

    data_020f7b4c->mpCallback(256, &arg);
}
