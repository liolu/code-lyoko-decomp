/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* MB_ReadMultiBootParentBssDesc from https://github.com/ntrtwl/NitroSDK libraries/mb/src/mb_child.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
extern void func_0200bd78(const void *src, void *dest, u32 size);
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
static inline void MI_WriteByte(void *address, u8 value) {
    *(u8 *) address = value;
}
typedef struct {
    u16 length;
    u16 rssi;
    u16 bssid[3];
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
} MBParentBssDesc;
typedef struct {
    u16 boot_type;
    MBParentBssDesc parent_bss_desc;
} MBParam;
static inline const MBParam *MB_GetMultiBootParam(void) {
    return (const MBParam *) (0x02000000 + 0x007ffc40);
}
static inline BOOL MB_IsMultiBootChild(void) {
    return MB_GetMultiBootParam()->boot_type == 2;
}
static inline const MBParentBssDesc *MB_GetMultiBootParentBssDesc(void) {
    return MB_IsMultiBootChild() ? &MB_GetMultiBootParam()->parent_bss_desc : ((void *) 0);
}
extern void func_02017dbc(WMBssDesc *p_desc, u16 parent_max_size, u16 child_max_size, BOOL ks_flag, BOOL cs_flag);
extern const u16(*ctrdgi_fl_maxtime);
void func_02017dbc(WMBssDesc *p_desc, u16 parent_max_size, u16 child_max_size, BOOL ks_flag, BOOL cs_flag) {
    const MBParentBssDesc *parentInfo = MB_GetMultiBootParentBssDesc();
    ((void) 0);
    func_0200bd78(parentInfo, p_desc, sizeof(MBParentBssDesc));

    p_desc->gameInfoLength       = 0x10;
    p_desc->gameInfo.magicNumber = 0x0001;
    p_desc->gameInfo.ver         = 0;
    p_desc->gameInfo.ggid        = (u32) (*(const u16 *) (&p_desc->ssid[0]) | (*(const u16 *) (&p_desc->ssid[2]) << 16));
    p_desc->gameInfo.tgid        = *(const u16 *) (&p_desc->ssid[4]);
    p_desc->gameInfo.userGameInfoLength = 0;
    p_desc->gameInfo.parentMaxSize      = parent_max_size;
    p_desc->gameInfo.childMaxSize       = child_max_size;

    MI_WriteByte(&p_desc->gameInfo.attribute, (u8) ((ks_flag ? (1 << 2) : 0) | (cs_flag ? (1 << 3) : 0) | (1 << 0)));
}
