/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* MBi_RecvFixedBeacon from https://github.com/ntrtwl/NitroSDK libraries/mb/src/mb_gameinfo.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
extern void func_0200bb94(const void *srcp, void *destp, u32 size);
static inline void MI_CpuCopy16(const void *src, void *dest, u32 size) {
    ((void) 0);
    ((void) 0);
    ((void) 0);

    func_0200bb94(src, dest, size);
}
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
typedef enum MbBeaconDataAttr {
    MB_BEACON_DATA_ATTR_FIXED_NORMAL = 0,
    MB_BEACON_DATA_ATTR_FIXED_NO_ICON,
    MB_BEACON_DATA_ATTR_VOLAT
} MBBeaconDataAttr, MbBeaconDataAttr;
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
typedef struct MbBeacon {
    u32 ggid;
    u8 dataAttr : 2;
    u8 fileNo : 6;
    u8 seqNoFixed;
    u8 seqNoVolat;
    u8 beaconNo;
    union {
        struct {
            u16 sum;
            u8 flagmentNo;
            u8 flagmentMaxNum;
            u8 size;
            u8 rsv;
            u8 data[((112 - 8) - 6)];
        } fixed;
        struct {
            u16 sum;
            u8 nowPlayerNum;
            u8 pad[1];
            u16 nowPlayerFlag;
            u16 changePlayerFlag;
            MBUserInfo member[(((112 - 8) - 8) / sizeof(MBUserInfo))];
            u8 userVolatData[8];
        } volat;
    } data;
} MbBeacon;
extern void func_02019144(int index);
extern MbBeaconRecvStatus *data_020f7994;
extern MbBeacon *data_020f7990;
void func_02019144(int index) {
    MBGameInfoRecvList *grecvp = &data_020f7994->list[index];
    u32 lastAddr               = (u32) &grecvp->gameInfo + sizeof(MBGameInfoFixed);
    u8 *dstp;

    if (grecvp->gameInfo.seqNoFixed == data_020f7990->seqNoFixed) {
        if (grecvp->getFlagmentFlag & (0x01 << data_020f7990->data.fixed.flagmentNo)) {
            return;
        }
    }

    if (data_020f7990->dataAttr == MB_BEACON_DATA_ATTR_FIXED_NORMAL) {
        dstp = (u8 *) &grecvp->gameInfo.fixed;
    } else {
        dstp = (u8 *) &grecvp->gameInfo.fixed.parent;
    }

    dstp += ((112 - 8) - 6) * data_020f7990->data.fixed.flagmentNo;

    if ((u32) dstp + data_020f7990->data.fixed.size > lastAddr) {
        ((void) 0);
        return;
    }

    ((void) 0);
    MI_CpuCopy16(data_020f7990->data.fixed.data, dstp, data_020f7990->data.fixed.size);

    grecvp->gameInfo.dataAttr = data_020f7990->dataAttr;
    grecvp->getFlagmentFlag |= 0x01 << data_020f7990->data.fixed.flagmentNo;
    grecvp->allFlagmentFlag = (u32) ((0x01 << data_020f7990->data.fixed.flagmentMaxNum) - 1);

    ((void) 0);
}
