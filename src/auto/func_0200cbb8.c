/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
extern u32 func_0200b040(void);
extern u32 func_0200b054(u32 state);
extern void func_0200b0a4(u32 count);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern UnkSndCommand *func_0200cbb8(u32 flags);
extern u32 func_0200cf64(void);
extern u32 data_020f488c;
extern UnkSndCommand *data_020f4898;
extern UnkSndCommand *data_020f4888;
extern s32 data_020f489c;
extern s32 data_020f48a4;
extern UnkSndCommand *data_020f48ac[9];

/* func_0207a818 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
UnkSndCommand *func_0200cbb8(u32 flags) {
    u32 enabled = func_0200b040();
    UnkSndCommand *head;
    UnkSndCommand *tail;

    if (flags & 1) {
        while (data_020f488c == func_0200cf64()) {
            func_0200b054(enabled);
            func_0200b0a4(100);
            enabled = func_0200b040();
        }
    } else if (data_020f488c == func_0200cf64()) {
        func_0200b054(enabled);
        return 0;
    }

    head = data_020f48ac[data_020f489c];
    data_020f489c++;
    if (data_020f489c > 8) {
        data_020f489c = 0;
    }

    tail = head;
    while (tail->next != 0) {
        tail = tail->next;
    }

    if (data_020f4898 != 0) {
        data_020f4898->next = head;
    } else {
        data_020f4888 = head;
    }
    data_020f4898 = tail;
    data_020f48a4--;
    data_020f488c++;

    func_0200b054(enabled);
    return head;
}
