/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02067ed4 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/fnd/fnd_list.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef struct UnkFndLink {
    void *unk_00;
    void *unk_04;
} UnkFndLink;
typedef struct UnkFndList {
    void *unk_00;
    void *unk_04;
    u16 unk_08;
    u16 unk_0a;
} UnkFndList;
extern void func_02031f60(UnkFndList *list, void *obj);
void func_02031f60(UnkFndList *list, void *obj);
void func_02031efc(UnkFndList *list, void *obj);
void func_02031e7c(UnkFndList *list, void *target, void *obj) {
    if (target == 0) {
        func_02031f60(list, obj);
    } else if (target == list->unk_00) {
        func_02031efc(list, obj);
    } else {
        UnkFndLink *link     = ((UnkFndLink *) ((u32) (obj) + (list)->unk_0a));
        void *prev           = ((UnkFndLink *) ((u32) (target) + (list)->unk_0a))->unk_00;
        UnkFndLink *prevLink = ((UnkFndLink *) ((u32) (prev) + (list)->unk_0a));

        link->unk_00                                               = prev;
        link->unk_04                                               = target;
        prevLink->unk_04                                           = obj;
        ((UnkFndLink *) ((u32) (target) + (list)->unk_0a))->unk_00 = obj;
        list->unk_08++;
    }
}
