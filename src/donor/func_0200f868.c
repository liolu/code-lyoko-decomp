/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020618dc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/fs/overlay.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef void (*UnkOverlayCtor)(void);
typedef struct UnkOverlayInfo {
    u32 id;
    u8 *addr;
    u32 ramSize;
    u32 bssSize;
    UnkOverlayCtor *ctorStart;
    UnkOverlayCtor *ctorEnd;
    u32 fileId;
    u32 compressedSize : 24;
    u32 flags : 8;
    u32 target;
    u32 filePos;
    u32 fileLen;
} UnkOverlayInfo;
extern u8 OverlaySignatures[];
extern u8 data_020f43e8[];
extern void func_02009d10(const void *addr, u32 count);
extern void func_0200bce4(void *dest, u8 value, u32 count);
extern void func_02000944(void *bottom);
extern void func_0200b2ec(void);
u32 func_0200fd3c(UnkOverlayInfo *info);
BOOL func_0200f968(const u8 *digest, void *src, u32 size);
void func_0200f868(UnkOverlayInfo *info) {
    u32 size = func_0200fd3c(info);

    if (*(u16 *) 0x027FFC40 == 2) {
        BOOL ok = 0;

        if (info->flags & 2) {
            if (info->id < (data_020f43e8 - OverlaySignatures) / 20) {
                ok = func_0200f968(OverlaySignatures + info->id * 20, info->addr, size);
            }
        }
        if (!ok) {
            func_0200bce4(info->addr, 0, size);
            func_0200b2ec();
            return;
        }
    }

    if (info->flags & 1) {
        func_02000944(info->addr + size);
    }
    func_02009d10(info->addr, info->ramSize);

    {
        UnkOverlayCtor *p   = info->ctorStart;
        UnkOverlayCtor *end = info->ctorEnd;
        for (; p < end; p++) {
            if (*p != 0) {
                (**p)();
            }
        }
    }
}
