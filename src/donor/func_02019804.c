/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* MBi_GetStoreElement from https://github.com/ntrtwl/NitroSDK libraries/mb/src/mb_gameinfo.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef int BOOL;
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
static inline BOOL WM_IsBssidEqual(const u8 *idp1, const u8 *idp2) {
    return ((*idp1 == *idp2) && (*(idp1 + 1) == *(idp2 + 1)) && (*(idp1 + 2) == *(idp2 + 2)) && (*(idp1 + 3) == *(idp2 + 3)) &&
            (*(idp1 + 4) == *(idp2 + 4)) && (*(idp1 + 5) == *(idp2 + 5)));
}
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
typedef enum MbBeaconMsg {
    MB_BC_MSG_GINFO_VALIDATED = 1,
    MB_BC_MSG_GINFO_INVALIDATED,
    MB_BC_MSG_GINFO_LOST,
    MB_BC_MSG_GINFO_LIST_FULL,
    MB_BC_MSG_GINFO_BEACON
} MbBeaconMsg;
typedef void (*MBBeaconMsgCallback)(MbBeaconMsg msg, MBGameInfoRecvList *gInfop, int index);
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
extern int func_02019804(WMBssDesc *bssDescp, MBBeaconMsgCallback Callbackp);
extern void func_02018e80(int index);
extern MbBeaconRecvStatus *data_020f7994;
extern MbBeacon *data_020f7990;
int func_02019804(WMBssDesc *bssDescp, MBBeaconMsgCallback Callbackp) {
    int i;

    for (i = 0; i < 16; i++) {
        MBGameInfoRecvList *info = &data_020f7994->list[i];

        if ((data_020f7994->usingGameInfoFlag & (0x01 << i)) == 0) {
            continue;
        }

        if (info->gameInfo.ggid != data_020f7990->ggid) {
            continue;
        }

        if (!WM_IsBssidEqual(info->bssDesc.bssid, bssDescp->bssid)) {
            continue;
        }

        if (data_020f7994->list[i].gameInfo.fileNo != data_020f7990->fileNo) {
            continue;
        }

        if (!(data_020f7994->validGameInfoFlag & (0x01 << i))) {
            func_02018e80(i);
        }

        return i;
    }

    for (i = 0; i < 16; i++) {
        if (data_020f7994->usingGameInfoFlag & (0x01 << i)) {
            continue;
        }

        MI_CpuCopy16(bssDescp, &data_020f7994->list[i].bssDesc, sizeof(WMBssDesc));

        data_020f7994->list[i].gameInfo.seqNoFixed = data_020f7990->seqNoFixed;
        data_020f7994->usingGameInfoFlag |= (u16) (0x01 << i);

        ((void) 0);

        func_02018e80(i);
        return i;
    }

    if (Callbackp != 0) {
        Callbackp(MB_BC_MSG_GINFO_LIST_FULL, 0, 0);
    }

    return -1;
}
void func_02018e80(int index);
