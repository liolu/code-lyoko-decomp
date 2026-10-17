/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* MBFi_WMCallback from https://github.com/ntrtwl/NitroSDK libraries/mb/src/mb_fake_child.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef int BOOL;
typedef enum WMApiid {
    WM_APIID_INITIALIZE = 0,
    WM_APIID_RESET,
    WM_APIID_END,
    WM_APIID_ENABLE,
    WM_APIID_DISABLE,
    WM_APIID_POWER_ON,
    WM_APIID_POWER_OFF,
    WM_APIID_SET_P_PARAM,
    WM_APIID_START_PARENT,
    WM_APIID_END_PARENT,
    WM_APIID_START_SCAN,
    WM_APIID_END_SCAN,
    WM_APIID_START_CONNECT,
    WM_APIID_DISCONNECT,
    WM_APIID_START_MP,
    WM_APIID_SET_MP_DATA,
    WM_APIID_END_MP,
    WM_APIID_START_DCF,
    WM_APIID_SET_DCF_DATA,
    WM_APIID_END_DCF,
    WM_APIID_SET_WEPKEY,
    WM_APIID_START_KS,
    WM_APIID_END_KS,
    WM_APIID_GET_KEYSET,
    WM_APIID_SET_GAMEINFO,
    WM_APIID_SET_BEACON_IND,
    WM_APIID_START_TESTMODE,
    WM_APIID_STOP_TESTMODE,
    WM_APIID_VALARM_MP,
    WM_APIID_SET_LIFETIME,
    WM_APIID_MEASURE_CHANNEL,
    WM_APIID_INIT_W_COUNTER,
    WM_APIID_GET_W_COUNTER,
    WM_APIID_SET_ENTRY,
    WM_APIID_AUTO_DEAUTH,
    WM_APIID_SET_MP_PARAMETER,
    WM_APIID_SET_BEACON_PERIOD,
    WM_APIID_AUTO_DISCONNECT,
    WM_APIID_START_SCAN_EX,
    WM_APIID_SET_WEPKEY_EX,
    WM_APIID_SET_PS_MODE,
    WM_APIID_START_TESTRXMODE,
    WM_APIID_STOP_TESTRXMODE,
    WM_APIID_KICK_MP_PARENT,
    WM_APIID_KICK_MP_CHILD,
    WM_APIID_KICK_MP_RESUME,
    WM_APIID_ASYNC_KIND_MAX,
    WM_APIID_INDICATION = 128,
    WM_APIID_PORT_SEND,
    WM_APIID_PORT_RECV,
    WM_APIID_READ_STATUS,
    WM_APIID_UNKNOWN = 255
} WMApiid;
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
typedef void (*WMCallbackFunc)(void *arg);
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
typedef struct WMGameInfo {
    u16 magicNumber;
    u8 ver;
    u8 platform;
    u32 ggid;
    u16 tgid;
    u8 userGameInfoLength;
    union {
        u8 gameNameCount_attribute;
        u8 attribute;
    };
    u16 parentMaxSize;
    u16 childMaxSize;
    union {
        u16 userGameInfo[112 / sizeof(u16)];
        struct {
            u16 userName[8 / sizeof(u16)];
            u16 gameName[16 / sizeof(u16)];
            u16 padd1[44];
        } old_type;
    };
} WMGameInfo, WMgameInfo;
typedef struct WMBssDesc {
    u16 length;
    u16 rssi;
    u8 bssid[6];
    u16 ssidLength;
    u8 ssid[32];
    u16 capaInfo;
    struct {
        u16 basic;
        u16 support;
    } rateSet;
    u16 beaconPeriod;
    u16 dtimPeriod;
    u16 channel;
    u16 cfpPeriod;
    u16 cfpMaxDuration;
    u16 gameInfoLength;
    u16 otherElementCount;
    WMGameInfo gameInfo;
} WMBssDesc, WMbssDesc;
typedef struct WMScanParam {
    WMBssDesc *scanBuf;
    u16 channel;
    u16 maxChannelTime;
    u8 bssid[6];
    u16 rsv[9];
} WMScanParam, WMscanParam;
typedef struct WMStartScanCallback {
    u16 apiid;
    u16 errcode;
    u16 wlCmdID;
    u16 wlResult;
    u16 state;
    u8 macAddress[6];
    u16 channel;
    u16 linkLevel;
    u16 ssidLength;
    u16 ssid[32 / sizeof(u16)];
    u16 gameInfoLength;
    WMGameInfo gameInfo;
} WMStartScanCallback, WMstartScanCallback;
typedef struct WMPortRecvCallback {
    u16 apiid;
    u16 errcode;
    u16 state;
    u16 port;
    WMMpRecvBuf *recvBuf;
    u16 *data;
    u16 length;
    u16 aid;
    u8 macAddress[6];
    u16 seqNo;
    void *arg;
    u16 myAid;
    u16 connectedAidBitmap;
    u8 ssid[24];
    u16 reason;
    u16 rsv;
    u16 maxSendDataSize;
    u16 maxRecvDataSize;
} WMPortRecvCallback;
extern const u16(*ctrdgi_fl_maxtime);
typedef struct {
    u16 errcode;
} MBErrorStatus;
typedef enum {
    MB_ERRCODE_SUCCESS = 0,
    MB_ERRCODE_INVALID_PARAM,
    MB_ERRCODE_INVALID_STATE,
    MB_ERRCODE_INVALID_DLFILEINFO,
    MB_ERRCODE_INVALID_BLOCK_NO,
    MB_ERRCODE_INVALID_BLOCK_NUM,
    MB_ERRCODE_INVALID_FILE,
    MB_ERRCODE_INVALID_RECV_ADDR,
    MB_ERRCODE_WM_FAILURE,
    MB_ERRCODE_FATAL,
    MB_ERRCODE_MAX
} MBErrCode;
typedef struct {
    u16 palette[16];
    u16 data[512 / 2];
} MBIconInfo;
typedef struct {
    u8 favoriteColor : 4;
    u8 playerNo : 4;
    u8 nameLength;
    u16 name[10];
} MBUserInfo;
typedef struct MBGameInfoFixed {
    MBIconInfo icon;
    MBUserInfo parent;
    u8 maxPlayerNum;
    u8 pad[1];
    u16 gameName[48];
    u16 gameIntroduction[96];
} MBGameInfoFixed, MbGameInfoFixed;
typedef struct MBGameInfoVolatile {
    u8 nowPlayerNum;
    u8 pad[1];
    u16 nowPlayerFlag;
    u16 changePlayerFlag;
    MBUserInfo member[15];
    u8 userVolatData[8];
} MBGameInfoVolatile, MbGameInfoVolatile;
typedef struct MBGameInfo {
    MBGameInfoFixed fixed;
    MBGameInfoVolatile volat;
    u16 broadcastedPlayerFlag;
    u8 dataAttr;
    u8 seqNoFixed;
    u8 seqNoVolat;
    u8 fileNo;
    u8 pad[2];
    u32 ggid;
    struct MBGameInfo *nextp;
} MBGameInfo, MbGameInfo;
typedef enum {
    MB_COMM_CSTATE_NONE,
    MB_COMM_CSTATE_INIT_COMPLETE,
    MB_COMM_CSTATE_CONNECT,
    MB_COMM_CSTATE_CONNECT_FAILED,
    MB_COMM_CSTATE_DISCONNECTED_BY_PARENT,
    MB_COMM_CSTATE_REQ_ENABLE,
    MB_COMM_CSTATE_REQ_REFUSED,
    MB_COMM_CSTATE_DLINFO_ACCEPTED,
    MB_COMM_CSTATE_RECV_PROCEED,
    MB_COMM_CSTATE_RECV_COMPLETE,
    MB_COMM_CSTATE_BOOTREQ_ACCEPTED,
    MB_COMM_CSTATE_BOOT_READY,
    MB_COMM_CSTATE_CANCELED,
    MB_COMM_CSTATE_CANCELLED = MB_COMM_CSTATE_CANCELED,
    MB_COMM_CSTATE_AUTHENTICATION_FAILED,
    MB_COMM_CSTATE_MEMBER_FULL,
    MB_COMM_CSTATE_GAMEINFO_VALIDATED,
    MB_COMM_CSTATE_GAMEINFO_INVALIDATED,
    MB_COMM_CSTATE_GAMEINFO_LOST,
    MB_COMM_CSTATE_GAMEINFO_LIST_FULL,
    MB_COMM_CSTATE_ERROR,
    MB_COMM_CSTATE_FAKE_END,
    MB_COMM_CSTATE_WM_EVENT = 0x80000000
} MBCommCState;
typedef void (*MBCommCStateCallbackFunc)(u32 status, void *arg);
typedef void (*MBFakeScanCallbackFunc)(u16 type, void *arg);
typedef BOOL (*MBFakeCompareGGIDCallbackFunc)(WMStartScanCallback *arg, u32 defaultGGID);
typedef struct {
    u16 apiid;
    u16 errcode;
} MBErrorCallback;
typedef struct MBGameInfoRecvList {
    MBGameInfo gameInfo;
    WMBssDesc bssDesc;
    u32 getFlagmentFlag;
    u32 allFlagmentFlag;
    u16 getPlayerFlag;
    s16 lifetimeCount;
    u16 linkLevel;
    u8 beaconNo;
    u8 sameBeaconRecvCount;
} MBGameInfoRecvList, MbGameInfoRecvList;
typedef struct MbBeaconRecvStatus {
    u16 usingGameInfoFlag;
    u16 usefulGameInfoFlag;
    u16 validGameInfoFlag;
    u16 nowScanTargetFlag;
    s16 nowLockTimeCount;
    s16 notFoundLockTargetCount;
    u16 scanCountUnit;
    u8 pad[2];
    MBGameInfoRecvList list[16];
} MbBeaconRecvStatus;
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
extern void func_0201df6c(u16 *sendBuf, u16 *recvBuf);
typedef struct {
    u32 sendBuf[(((16) + 2 + ((0) ? 2 + (2 + 2) : 0) + 31) & ~0x1f) / sizeof(u32)] __attribute__((aligned(32)));
    u32 recvBuf[(((sizeof(WMMpRecvBuf) + (510) + 4 - 4 + ((0) ? (2 * 16 + 4) + (2 + 4) : 0) + 31) & ~0x1f) * 2) / sizeof(u32)]
        __attribute__((aligned(32)));
    u32 sendDataBuf[(((16) + 2 + ((0) ? 2 + (2 + 2) : 0) + 31) & ~0x1f) / sizeof(u32)] __attribute__((aligned(32)));
    WMBssDesc bssDescBuf __attribute__((aligned(32)));
    WMScanParam scanParam __attribute__((aligned(32)));
    MBWMWork wmWork __attribute__((aligned(32)));
    MBUserInfo userInfo;
    u8 _padding1[2];
    MBFakeScanCallbackFunc scanCallback;
    MBCommCStateCallbackFunc stateCallback;
    u32 ggid;
    MbBeaconRecvStatus beaconRecvStatus;
    BOOL scanning;
    BOOL endScanBusy;
    BOOL locking;
    BOOL endFlag;
    u32 targetGgid;
    u16 targetFileNo;
    u16 c_comm_state;
    WMCallbackFunc verboseScanCallback;
    MBFakeCompareGGIDCallbackFunc compareGGIDCallback;
    u8 _padding2[8];
} MBFakeWork;
extern void func_0201d638(void);
extern void func_0201d5a4(u16 state, void *arg);
extern void MBFi_ErrorCallback(u16 apiid, u16 errcode, BOOL isApiError);
extern void func_0201cca0(u16 type, void *arg);
extern void func_0201cad0(WMPortRecvCallback *cb);
extern void func_0201c904(void);
extern MBFakeWork *data_020f7b48;
void func_0201d638(void);
void func_0201d5a4(u16 state, void *arg);
static inline void MBFi_ErrorCallback(u16 apiid, u16 errcode, BOOL isApiError) {
    MBErrorStatus cb;
    u16 error_type;

    if (data_020f7b48->stateCallback == 0) {
        return;
    }

    if (isApiError) {
        switch (errcode) {
            case WM_ERRCODE_INVALID_PARAM:
            case WM_ERRCODE_FAILED:
            case WM_ERRCODE_WM_DISABLE:
            case WM_ERRCODE_NO_DATASET:
            case WM_ERRCODE_FIFO_ERROR:
            case WM_ERRCODE_TIMEOUT:
                error_type = MB_ERRCODE_FATAL;
                break;
            case WM_ERRCODE_OPERATING:
            case WM_ERRCODE_ILLEGAL_STATE:
            case WM_ERRCODE_NO_CHILD:
            case WM_ERRCODE_OVER_MAX_ENTRY:
            case WM_ERRCODE_NO_ENTRY:
            case WM_ERRCODE_INVALID_POLLBITMAP:
            case WM_ERRCODE_NO_DATA:
            case WM_ERRCODE_SEND_QUEUE_FULL:
            case WM_ERRCODE_SEND_FAILED:
            default:
                error_type = MB_ERRCODE_WM_FAILURE;
                break;
        }
    } else {
        switch (apiid) {
            case WM_APIID_INITIALIZE:
            case WM_APIID_SET_LIFETIME:
            case WM_APIID_SET_P_PARAM:
            case WM_APIID_SET_BEACON_IND:
            case WM_APIID_START_PARENT:
            case WM_APIID_START_MP:
            case WM_APIID_SET_MP_DATA:
            case WM_APIID_START_DCF:
            case WM_APIID_SET_DCF_DATA:
            case WM_APIID_DISCONNECT:
            case WM_APIID_START_KS:
                error_type = MB_ERRCODE_FATAL;
                break;
            case WM_APIID_RESET:
            case WM_APIID_END:
            default:
                error_type = MB_ERRCODE_WM_FAILURE;
                break;
        }
    }

    ((void) 0);

    cb.errcode = error_type;
    data_020f7b48->stateCallback(MB_COMM_CSTATE_ERROR, &cb);
}
void func_0201cca0(u16 type, void *arg) {

#pragma unused(arg)
    switch (type) {
        case 11:
            func_0201d5a4(MB_COMM_CSTATE_CONNECT_FAILED, 0);
            break;
        case 6:
            ((void) 0);
            func_0201d5a4(MB_COMM_CSTATE_CONNECT, arg);
            func_0201df6c((u16 *) data_020f7b48->sendBuf, (u16 *) data_020f7b48->recvBuf);
            break;
        case 10:
            func_0201d5a4(MB_COMM_CSTATE_DISCONNECTED_BY_PARENT, arg);
            break;
        case 20:
            break;
        case 25: {
            func_0201c904();
        } break;
        case 9: {
            func_0201cad0((WMPortRecvCallback *) arg);
        } break;
        case 15:
            if (data_020f7b48->c_comm_state == MB_COMM_CSTATE_BOOTREQ_ACCEPTED) {
                func_0201d5a4(MB_COMM_CSTATE_BOOT_READY, 0);
            } else {
                func_0201d5a4(MB_COMM_CSTATE_CANCELLED, 0);
            }

            if (data_020f7b48->endFlag) {
                func_0201d638();
            }
            break;
        case 8:
        case 41:
        case 18:
            break;
        case 255: {
            MBErrorCallback *cb = (MBErrorCallback *) arg;
            MBFi_ErrorCallback(cb->apiid, cb->errcode, 1);
        } break;
        case 256: {
            MBErrorCallback *cb = (MBErrorCallback *) arg;
            MBFi_ErrorCallback(cb->apiid, cb->errcode, 0);
        } break;
        default:
            break;
    }
}
void func_0201cad0(WMPortRecvCallback *cb);
void func_0201c904(void);
