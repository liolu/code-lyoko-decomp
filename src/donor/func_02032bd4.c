/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNSi_G2dUnpackUserExCellAttrBank from https://github.com/Yokimitsuro/khdays-decomp
 * libs/nns/g2d/auto/NNSi_G2dUnpackUserExCellAttrBank.c (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
typedef struct NNSG2dUserExCellAttr {
    u32 *pAttr;
} NNSG2dUserExCellAttr;
typedef struct NNSG2dUserExCellAttrBank {
    u16 numCells;
    u16 numAttribute;
    NNSG2dUserExCellAttr *pCellAttrArray;
} NNSG2dUserExCellAttrBank;
void func_02032bd4(NNSG2dUserExCellAttrBank *pCellAttrBank) {
    u16 i;

    pCellAttrBank->pCellAttrArray = (pCellAttrBank->pCellAttrArray) =
        (void *) ((u32) (pCellAttrBank->pCellAttrArray) + (u32) pCellAttrBank);
    for (i = 0; i < pCellAttrBank->numCells; i++) {
        pCellAttrBank->pCellAttrArray[i].pAttr = (pCellAttrBank->pCellAttrArray[i].pAttr) =
            (void *) ((u32) (pCellAttrBank->pCellAttrArray[i].pAttr) + (u32) pCellAttrBank);
    }
}
