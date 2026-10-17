/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020758e4 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_arcplayer.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkSndSeqParam {
    u32 fileId;
    u16 bankNo;
    u8 volume;
    u8 channelPrio;
    u8 playerPrio;
    u8 playerNo;
} UnkSndSeqParam;
typedef struct UnkSndSeqData {
    u8 unk_00[0x18];
    u32 dataOffset;
} UnkSndSeqData;
extern int func_0203c42c(int seqNo, u32 flags, void *heap, BOOL addToArc, void **pData);
extern int func_0203c25c(int bankNo, u32 flags, void *heap, BOOL addToArc, void **pData);
extern void *func_02039ba0(void *handle, int playerNo, int prio);
extern void func_02039b94(void *seqPlayer);
extern void func_02039b38(void *seqPlayer, const void *seq, u32 offset, const void *bank);
extern void *func_02039a34(int playerNo, void *seqPlayer);
extern void func_0203a040(void *handle, int volume);
extern void func_02039f9c(void *handle, int prio);
extern void func_02039eb0(void *handle, int seqNo);
extern BOOL func_0203c5e0(void *handle, int playerNo, int bankNo, int playerPrio, UnkSndSeqParam *param, int seqNo);
BOOL func_0203c5e0(void *handle, int playerNo, int bankNo, int playerPrio, UnkSndSeqParam *param, int seqNo) {
    void *seqPlayer;
    void *heap;
    UnkSndSeqData *seq;
    void *bank;

    seqPlayer = func_02039ba0(handle, playerNo, playerPrio);
    if (seqPlayer == 0) {
        return 0;
    }

    heap = func_02039a34(playerNo, seqPlayer);

    if (func_0203c25c(bankNo, 6, heap, 0, &bank) != 0) {
        func_02039b94(seqPlayer);
        return 0;
    }

    if (func_0203c42c(seqNo, 1, heap, 0, (void **) &seq) != 0) {
        func_02039b94(seqPlayer);
        return 0;
    }

    func_02039b38(seqPlayer, (u8 *) seq + seq->dataOffset, 0, bank);
    func_0203a040(handle, param->volume);
    func_02039f9c(handle, param->channelPrio);
    func_02039eb0(handle, seqNo);
    return 1;
}
