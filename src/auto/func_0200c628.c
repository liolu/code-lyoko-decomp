/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
extern u32 func_0200b040(void);
extern u32 func_0200b054(u32 state);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern UnkSndCommand *func_0200c628(void);
extern UnkSndCommand *data_020f4898;
extern UnkSndCommand *data_020f4888;

/* func_0207adcc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
UnkSndCommand *func_0200c628(void) {
    UnkSndCommand *cmd;
    u32 enabled = func_0200b040();

    cmd = data_020f4888;
    if (cmd == 0) {
        func_0200b054(enabled);
        return 0;
    }
    data_020f4888 = cmd->next;
    if (data_020f4888 == 0) {
        data_020f4898 = 0;
    }
    func_0200b054(enabled);
    return cmd;
}
