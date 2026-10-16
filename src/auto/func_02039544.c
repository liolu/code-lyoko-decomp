/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef signed char s8;
typedef struct CallbackNode {
    void (*func)(void);
    void *arg;
    struct CallbackNode *next;
} CallbackNode;
extern s8 data_020fa6a0;
extern u32 data_020fa6ac;
extern u32 data_020fa6a4;
extern CallbackNode data_020fa6bc;
extern CallbackNode data_020fa6b0;
extern void func_020393d4(void);
extern void func_020393c8(void);
extern void func_0200c594(void);
extern void func_0201119c(CallbackNode *node);
extern void func_02011184(CallbackNode *node);
extern void *func_020395ec(void);
extern void func_0203aad0(void);
extern void func_02039dd0(void);

/* SoundSystem_Init from https://github.com/sturmds/advance-wars-dual-strike-decomp src/game/main/sound/sound_system_init.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
void func_02039544(void) {
    if (data_020fa6ac != 0) {
        return;
    }
    data_020fa6ac = 1;
    func_0200c594();
    data_020fa6b0.func = func_020393d4;
    data_020fa6b0.arg  = ((void *) 0);
    data_020fa6bc.func = func_020393c8;
    data_020fa6bc.arg  = ((void *) 0);
    func_0201119c(&data_020fa6b0);
    func_02011184(&data_020fa6bc);
    func_020395ec();
    func_0203aad0();
    func_02039dd0();
    data_020fa6a0 = -1;
    data_020fa6a4 = 1;
}
