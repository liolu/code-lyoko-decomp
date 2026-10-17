/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* MBFi_ScanErrorCallback from https://github.com/ntrtwl/NitroSDK libraries/mb/src/mb_fake_child.c (license: none), reused by
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
typedef void (*MBCommCStateCallbackFunc)(u32 status, void *arg);
enum {
    MB_FAKESCAN_PARENT_FOUND,
    MB_FAKESCAN_PARENT_LOST,
    MB_FAKESCAN_API_ERROR,
    MB_FAKESCAN_END_SCAN,
    MB_FAKESCAN_PARENT_BEACON
};
typedef struct {
    u16 apiid;
    u16 errcode;
} MBFakeScanErrorCallback;
typedef void (*MBFakeScanCallbackFunc)(u16 type, void *arg);
typedef BOOL (*MBFakeCompareGGIDCallbackFunc)(WMStartScanCallback *arg, u32 defaultGGID);
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
extern void func_0201d2a8(u16 apiid, u16 errcode);
extern MBFakeWork *data_020f7b48;
void func_0201d2a8(u16 apiid, u16 errcode) {
    MBFakeScanErrorCallback cb;

    if (data_020f7b48->scanCallback == 0) {
        return;
    }

    cb.apiid   = apiid;
    cb.errcode = errcode;

    data_020f7b48->scanCallback(MB_FAKESCAN_API_ERROR, &cb);
}
