/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* MBFi_CommChildRecvData from https://github.com/ntrtwl/NitroSDK libraries/mb/src/mb_fake_child.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef int BOOL;
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
typedef enum MBCommType {
    MB_COMM_TYPE_DUMMY = 0,
    MB_COMM_TYPE_PARENT_SENDSTART,
    MB_COMM_TYPE_PARENT_KICKREQ,
    MB_COMM_TYPE_PARENT_DL_FILEINFO,
    MB_COMM_TYPE_PARENT_DATA,
    MB_COMM_TYPE_PARENT_BOOTREQ,
    MB_COMM_TYPE_PARENT_MEMBER_FULL,
    MB_COMM_TYPE_CHILD_FILEREQ,
    MB_COMM_TYPE_CHILD_ACCEPT_FILEINFO,
    MB_COMM_TYPE_CHILD_CONTINUE,
    MB_COMM_TYPE_CHILD_STOPREQ,
    MB_COMM_TYPE_CHILD_BOOTREQ_ACCEPTED
} MBCommType;
typedef struct {
    u8 type;
    u8 pad1[1];
    u16 fid;
    u16 seqno;
} MBCommParentBlockHeader;
extern u8 *func_0201e2f0(MBCommParentBlockHeader *hdr, const u8 *recvbuf);
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
extern void func_0201dd7c(void);
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
extern void func_0201d5a4(u16 state, void *arg);
extern void func_0201cad0(WMPortRecvCallback *cb);
extern MBFakeWork *data_020f7b48;
void func_0201d5a4(u16 state, void *arg);
void func_0201cad0(WMPortRecvCallback *cb) {
    MBCommParentBlockHeader hd;

    (void) func_0201e2f0(&hd, (u8 *) cb->data);

    switch (hd.type) {
        case MB_COMM_TYPE_PARENT_SENDSTART:
            if (data_020f7b48->c_comm_state == MB_COMM_CSTATE_CONNECT) {
                ((void) 0);
                func_0201d5a4(MB_COMM_CSTATE_REQ_ENABLE, 0);
            }
            break;
        case MB_COMM_TYPE_PARENT_KICKREQ:
            if (data_020f7b48->c_comm_state == MB_COMM_CSTATE_REQ_ENABLE) {
                func_0201d5a4(MB_COMM_CSTATE_REQ_REFUSED, 0);
            }
            break;
        case MB_COMM_TYPE_PARENT_MEMBER_FULL:
            if (data_020f7b48->c_comm_state == MB_COMM_CSTATE_REQ_ENABLE) {
                func_0201d5a4(MB_COMM_CSTATE_MEMBER_FULL, 0);
            }
            break;
        case MB_COMM_TYPE_PARENT_DL_FILEINFO:
            if (data_020f7b48->c_comm_state == MB_COMM_CSTATE_REQ_ENABLE) {
                func_0201d5a4(MB_COMM_CSTATE_DLINFO_ACCEPTED, 0);
            }
            break;
        case MB_COMM_TYPE_PARENT_DATA:
            if (data_020f7b48->c_comm_state == MB_COMM_CSTATE_DLINFO_ACCEPTED) {
                func_0201d5a4(MB_COMM_CSTATE_RECV_PROCEED, 0);
            }

            if (data_020f7b48->c_comm_state == MB_COMM_CSTATE_RECV_PROCEED) {
                func_0201d5a4(MB_COMM_CSTATE_RECV_COMPLETE, 0);
            }
            break;
        case MB_COMM_TYPE_PARENT_BOOTREQ:
            if (data_020f7b48->c_comm_state == MB_COMM_CSTATE_RECV_COMPLETE) {
                func_0201d5a4(MB_COMM_CSTATE_BOOTREQ_ACCEPTED, 0);
            } else if (data_020f7b48->c_comm_state == MB_COMM_CSTATE_BOOTREQ_ACCEPTED) {
                func_0201dd7c();
            }
            break;
        default:
            break;
    }

    return;
}
