/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207d56c from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/wm/wm_sta.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
extern void func_02009cf4(void *ptr, u32 size);
extern void func_0200bd78(const void *src, void *dest, u32 size);
extern void func_0200bce4(void *dest, u8 value, u32 size);
typedef void (*UnkWmCallbackFunc)(void *arg);
typedef struct UnkWmStatus {
    u16 state;
    u8 unk_002[0xa];
    u32 unk_00c;
    u8 unk_010[0x2c];
    u16 unk_03c;
    u16 unk_03e;
    u8 unk_040[0x32];
    u16 unk_072;
    u8 unk_074[0x8];
    u32 unk_07c;
    u8 unk_080[0x6];
    u16 unk_086;
    u8 unk_088[0x14];
    u16 unk_09c;
    u8 unk_09e[0x1e];
    u16 unk_0bc;
    u8 unk_0be[0x8];
    u16 unk_0c6;
    u8 unk_0c8[0x30];
    u16 unk_0f8;
    u8 unk_0fa[0x88];
    u16 unk_182;
    u8 unk_184[0x4];
    u16 unk_188;
} UnkWmStatus;
typedef struct UnkWmArm9Buf {
    void *unk_000;
    UnkWmStatus *status;
    void *unk_008;
    void *unk_00c;
    void *unk_010;
    u16 dmaNo;
    u16 unk_016;
    UnkWmCallbackFunc callbackTable[0x2c];
    UnkWmCallbackFunc indCallback;
    UnkWmCallbackFunc portCallbackTable[16];
    void *portCallbackArgument[16];
    u32 connectedAidBitmap;
    u16 myAid;
} UnkWmArm9Buf;
extern void func_0201456c(u32 id, UnkWmCallbackFunc callback);
extern u32 func_020143c8(void *data, u32 length);
extern UnkWmArm9Buf *func_020143b8(void);
extern u32 func_02014298(s32 paramNum, ...);
typedef struct UnkWmBssDesc {
    u16 length;
    u8 unk_02[0x3a];
    u16 unk_3c;
    u8 unk_3e[6];
    u32 unk_44;
    u8 unk_48[8];
    u8 unk_50[8];
} UnkWmBssDesc;
typedef struct UnkWmStartConnectReq {
    u16 apiid;
    u16 unk_02;
    UnkWmBssDesc *pInfo;
    u8 ssid[24];
    BOOL powerSave;
    u16 unk_24;
    u16 authMode;
} UnkWmStartConnectReq;
u32 func_02014f4c(UnkWmCallbackFunc callback, UnkWmBssDesc *pInfo, const u8 *ssid, BOOL powerSave, u16 authMode) {
    UnkWmStartConnectReq req;
    UnkWmArm9Buf *p;
    u32 result = func_02014298(1, 2);

    if (result != 0) {
        return result;
    }
    if (pInfo == 0) {
        return 6;
    }
    func_02009cf4(pInfo, pInfo->length * 2);

    p                     = func_020143b8();
    p->myAid              = 0;
    p->connectedAidBitmap = 0;
    func_0201456c(12, callback);

    req.apiid = 12;
    req.pInfo = pInfo;
    if (ssid != 0) {
        func_0200bd78(ssid, req.ssid, 24);
    } else {
        func_0200bce4(req.ssid, 0, 24);
    }
    req.powerSave = powerSave;
    req.authMode  = authMode;
    result        = func_020143c8(&req, sizeof(UnkWmStartConnectReq));
    if (result != 0) {
        return result;
    }
    return 2;
}
