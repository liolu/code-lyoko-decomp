/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* ChildStateOutStartMP from https://github.com/ntrtwl/NitroSDK libraries/mb/src/mb_wm.c (license: none), reused by
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
typedef enum WMStateCode {
    WM_STATECODE_PARENT_START             = 0,
    WM_STATECODE_BEACON_SENT              = 2,
    WM_STATECODE_SCAN_START               = 3,
    WM_STATECODE_PARENT_NOT_FOUND         = 4,
    WM_STATECODE_PARENT_FOUND             = 5,
    WM_STATECODE_CONNECT_START            = 6,
    WM_STATECODE_BEACON_LOST              = 8,
    WM_STATECODE_CONNECTED                = 7,
    WM_STATECODE_CHILD_CONNECTED          = 7,
    WM_STATECODE_DISCONNECTED             = 9,
    WM_STATECODE_DISCONNECTED_FROM_MYSELF = 26,
    WM_STATECODE_MP_START                 = 10,
    WM_STATECODE_MPEND_IND                = 11,
    WM_STATECODE_MP_IND                   = 12,
    WM_STATECODE_MPACK_IND                = 13,
    WM_STATECODE_DCF_START                = 14,
    WM_STATECODE_DCF_IND                  = 15,
    WM_STATECODE_BEACON_RECV              = 16,
    WM_STATECODE_DISASSOCIATE             = 17,
    WM_STATECODE_REASSOCIATE              = 18,
    WM_STATECODE_AUTHENTICATE             = 19,
    WM_STATECODE_PORT_INIT                = 25,
    WM_STATECODE_PORT_SEND                = 20,
    WM_STATECODE_PORT_RECV                = 21,
    WM_STATECODE_FIFO_ERROR               = 22,
    WM_STATECODE_INFORMATION              = 23,
    WM_STATECODE_UNKNOWN                  = 24,
    WM_STATECODE_MAX                      = 27
} WMStateCode;
typedef struct WMMpRecvBuf {
    u16 rsv1[3];
    u16 length;
    u16 rsv2[1];
    u16 ackTimeStamp;
    u16 timeStamp;
    u16 rate_rssi;
    u16 rsv3[2];
    u16 rsv4[2];
    u8 destAdrs[6];
    u8 srcAdrs[6];
    u16 rsv5[3];
    u16 seqCtrl;
    u16 txop;
    u16 bitmap;
    u16 wmHeader;
    u16 data[2];
} WMMpRecvBuf, WMmpRecvBuf;
typedef struct WMStartMPCallback {
    u16 apiid;
    u16 errcode;
    u16 state;
    u8 reserved[2];
    WMMpRecvBuf *recvBuf;
    u16 timeStamp;
    u16 rate_rssi;
    u8 destAdrs[6];
    u8 srcAdrs[6];
    u16 seqNum;
    u16 tmptt;
    u16 pollbmp;
    u16 reserved2;
} WMStartMPCallback, WMstartMPCallback;
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
extern void func_0201de04(void *arg);
extern void MBi_WMSendCallback(u16 type, void *arg);
extern void MBi_WMErrorCallback(u16 apiid, u16 error_code);
extern MBWMWork *data_020f7b4c;
void func_0201de04(void *arg) {
    WMStartMPCallback *cb = (WMStartMPCallback *) arg;

    if (cb->errcode != WM_ERRCODE_SUCCESS) {
        if (cb->errcode == WM_ERRCODE_SEND_FAILED) {
            return;
        } else if (cb->errcode == WM_ERRCODE_TIMEOUT) {
            return;
        } else if (cb->errcode == WM_ERRCODE_INVALID_POLLBITMAP) {
            return;
        }

        MBi_WMErrorCallback(cb->apiid, cb->errcode);
        return;
    }

    switch (cb->state) {
        case WM_STATECODE_MP_START:
            data_020f7b4c->mpStarted    = 1;
            data_020f7b4c->mpBusy       = 0;
            data_020f7b4c->child_bitmap = 0;
            MBi_WMSendCallback(20, 0);
            {
                MBi_WMSendCallback(25, 0);
            }
            break;
        case WM_STATECODE_MP_IND:
            break;
        case WM_STATECODE_MPACK_IND:
            break;
        case WM_STATECODE_MPEND_IND:
        default:
            MBi_WMErrorCallback(cb->apiid, WM_ERRCODE_FAILED);
            break;
    }
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
