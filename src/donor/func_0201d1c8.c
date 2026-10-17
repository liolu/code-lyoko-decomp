/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* MBFi_CommBeaconRecvCallback from https://github.com/ntrtwl/NitroSDK libraries/mb/src/mb_fake_child.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
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
enum {
    MB_FAKESCAN_PARENT_FOUND,
    MB_FAKESCAN_PARENT_LOST,
    MB_FAKESCAN_API_ERROR,
    MB_FAKESCAN_END_SCAN,
    MB_FAKESCAN_PARENT_BEACON
};
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
typedef enum MbBeaconMsg {
    MB_BC_MSG_GINFO_VALIDATED = 1,
    MB_BC_MSG_GINFO_INVALIDATED,
    MB_BC_MSG_GINFO_LOST,
    MB_BC_MSG_GINFO_LIST_FULL,
    MB_BC_MSG_GINFO_BEACON
} MbBeaconMsg;
extern void func_0201d1c8(MbBeaconMsg msg, MBGameInfoRecvList *gInfop, int index);
extern void func_0201d2f4(u16 state, MBGameInfoRecvList *gInfop, int index);
void func_0201d2f4(u16 state, MBGameInfoRecvList *gInfop, int index);
void func_0201d1c8(MbBeaconMsg msg, MBGameInfoRecvList *gInfop, int index) {
    switch (msg) {
        case MB_BC_MSG_GINFO_VALIDATED:
            func_0201d2f4(MB_FAKESCAN_PARENT_FOUND, (void *) gInfop, index);
            ((void) 0);
            break;
        case MB_BC_MSG_GINFO_INVALIDATED:
            ((void) 0);
            break;
        case MB_BC_MSG_GINFO_LOST:
            func_0201d2f4(MB_FAKESCAN_PARENT_LOST, (void *) gInfop, index);
            ((void) 0);
            break;
        case MB_BC_MSG_GINFO_LIST_FULL:
            ((void) 0);
            break;
        case MB_BC_MSG_GINFO_BEACON:
            func_0201d2f4(MB_FAKESCAN_PARENT_BEACON, (void *) gInfop, index);
            break;
    }
}
