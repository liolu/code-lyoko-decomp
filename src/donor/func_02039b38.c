/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02073854 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_player.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef struct UnkList {
    void *head;
    void *tail;
    u16 numObjects;
    u16 offset;
} UnkList;
typedef struct UnkLink {
    void *prev;
    void *next;
} UnkLink;
extern void func_0200c50c(int playerNo, const void *seq, u32 offset, const void *bank);
extern void func_0200c3c0(int playerNo, u32 trackBitMask, u32 chBitMask);
extern u32 func_0200c844(void);
typedef struct UnkSndFader {
    s32 origin;
    s32 target;
    s32 counter;
    s32 frames;
} UnkSndFader;
typedef struct UnkSndSeqPlayer {
    struct UnkSndHandle *handle;
    struct UnkSndPlayer *player;
    struct UnkSndPlayerHeap *heap;
    UnkLink prioLink;
    UnkLink playerLink;
    UnkSndFader fader;
    u8 status;
    u8 unk_2d;
    u8 unk_2e;
    u8 unk_2f;
    u32 commandTag;
    u16 unk_34;
    u8 unk_36[6];
    u8 playerNo;
    u8 prio;
    u16 unk_3e;
    u8 unk_40;
    u8 unk_41;
} UnkSndSeqPlayer;
typedef struct UnkSndHandle {
    UnkSndSeqPlayer *player;
} UnkSndHandle;
typedef struct UnkSndPlayer {
    UnkList playerList;
    UnkList heapList;
    u32 playableSeqCount;
    u32 allocChBitFlag;
    u32 unk_20;
} UnkSndPlayer;
typedef struct UnkSndPlayerHeap {
    UnkLink link;
    void *heap;
    UnkSndSeqPlayer *seqPlayer;
    int playerNo;
} UnkSndPlayerHeap;
extern void func_02039b38(UnkSndSeqPlayer *seqPlayer, const void *seq, u32 offset, const void *bank);
extern void func_020399e8(UnkSndSeqPlayer *seqPlayer);
void func_02039b38(UnkSndSeqPlayer *seqPlayer, const void *seq, u32 offset, const void *bank) {
    UnkSndPlayer *player = seqPlayer->player;

    func_0200c50c(seqPlayer->playerNo, seq, offset, bank);
    if (player->allocChBitFlag != 0) {
        func_0200c3c0(seqPlayer->playerNo, 0xFFFF, player->allocChBitFlag);
    }
    func_020399e8(seqPlayer);
    seqPlayer->commandTag = func_0200c844();
    seqPlayer->unk_2f     = 1;
    seqPlayer->status     = 1;
}
void func_020399e8(UnkSndSeqPlayer *seqPlayer);
