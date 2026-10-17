/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f3834 from projets/resident-evil-deadly-silence/src/donor/func_020f3834.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkLnkVramBlock {
    u32 addr;
    u32 szByte;
    struct UnkLnkVramBlock *pPrev;
    struct UnkLnkVramBlock *pNext;
} UnkLnkVramBlock;
typedef struct {
    UnkLnkVramBlock *pFreeList;
} UnkLnkVramMan;
extern BOOL func_02038a9c(UnkLnkVramMan *pMgr, UnkLnkVramBlock **ppBlockPool, u32 baseAddr, u32 szByte);
typedef struct {
    UnkLnkVramMan mgr;
    UnkLnkVramMan mgrFor4x4;
    UnkLnkVramBlock *pBlockPool;
    u32 szByte;
    u32 szByteFor4x4;
    void *pWork;
    u32 szWork;
} UnkLnkTexVramManager;
extern UnkLnkTexVramManager data_020fa670;
extern int func_02039024(u32 texKey);
static inline u32 KeyAddr_(u32 key) {
    return (u32) ((key & 0xffff) << 3);
}
static inline u32 KeySize_(u32 key) {
    return (u32) (((key & 0x7fff0000) >> 16) << 4);
}
static inline BOOL Key4x4_(u32 key) {
    return (BOOL) ((key & 0x80000000) >> 31);
}
int func_02039024(u32 texKey) {
    u32 addr       = KeyAddr_(texKey);
    u32 szByte     = KeySize_(texKey);
    BOOL is4x4comp = Key4x4_(texKey);
    BOOL result;

    if (szByte != 0) {
        if (is4x4comp) {
            result = func_02038a9c(&data_020fa670.mgrFor4x4, &data_020fa670.pBlockPool, addr, szByte);
        } else {
            result = func_02038a9c(&data_020fa670.mgr, &data_020fa670.pBlockPool, addr, szByte);
        }
        if (result) {
            return 0;
        } else {
            return 1;
        }
    }
    return 2;
}
