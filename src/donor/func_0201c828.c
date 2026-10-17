/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* MB_FakeReadParentBssDesc from https://github.com/ntrtwl/NitroSDK libraries/mb/src/mb_fake_child.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
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
extern BOOL func_0201c898(u16 index, WMBssDesc *pBssDesc);
extern BOOL func_0201c828(u16 index, WMBssDesc *pBssDesc, u16 parent_max_size, u16 child_max_size, BOOL ks_flag, BOOL cs_flag);
BOOL func_0201c898(u16 index, WMBssDesc *pBssDesc);
BOOL func_0201c828(u16 index, WMBssDesc *pBssDesc, u16 parent_max_size, u16 child_max_size, BOOL ks_flag, BOOL cs_flag) {
    BOOL result;

    ((void) 0);

    result = func_0201c898(index, pBssDesc);

    if (!result) {
        return 0;
    }

    pBssDesc->gameInfoLength              = 0x10;
    pBssDesc->gameInfo.userGameInfoLength = 0;
    pBssDesc->gameInfo.parentMaxSize      = parent_max_size;
    pBssDesc->gameInfo.childMaxSize       = child_max_size;
    pBssDesc->gameInfo.attribute          = (u8) ((ks_flag ? (1 << 2) : 0) | (cs_flag ? (1 << 3) : 0) | (1 << 0));
    return 1;
}
