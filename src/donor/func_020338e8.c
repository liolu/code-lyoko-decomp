/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_G2dInitializePaletteTable from https://github.com/ntrtwl/NitroSystem libraries/g2d/src/g2d_PaletteTable.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned short int u16;
extern const u16(*ctrdgi_fl_maxtime);
typedef struct NNSG2dPaletteSwapTable {
    u16 paletteIndex[16];
} NNSG2dPaletteSwapTable;
extern void func_020338e8(NNSG2dPaletteSwapTable *pPlttTbl);
void func_020338e8(NNSG2dPaletteSwapTable *pPlttTbl) {
    u16 i;
    ((void) 0);

    for (i = 0; i < 16; i++) {
        pPlttTbl->paletteIndex[i] = i;
    }
}
