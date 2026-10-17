/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NFTR_SomeFn_0 from https://github.com/RonyxDumb/mkds src/arm9/02022b44_NFTR_SomeFn_0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef signed char s8;
extern const u16(*ctrdgi_fl_maxtime);
typedef struct NNSG2dCharWidths {
    s8 left;
    u8 glyphWidth;
    s8 charWidth;
} NNSG2dCharWidths;
typedef struct NNSG2dFontGlyph {
    u8 cellWidth;
    u8 cellHeight;
    u16 cellSize;
    s8 baselinePos;
    u8 maxCharWidth;
    u8 bpp;
    u8 flags;
    u8 glyphTable[];
} NNSG2dFontGlyph;
typedef struct NNSG2dFontWidth {
    u16 indexBegin;
    u16 indexEnd;
    struct NNSG2dFontWidth *pNext;
    NNSG2dCharWidths widthTable[];
} NNSG2dFontWidth;
typedef struct NNSG2dFontCodeMap {
    u16 ccodeBegin;
    u16 ccodeEnd;
    u16 mappingMethod;
    u16 reserved;
    struct NNSG2dFontCodeMap *pNext;
    u16 mapInfo[];
} NNSG2dFontCodeMap;
typedef struct NNSG2dFontInformation {
    u8 fontType;
    s8 linefeed;
    u16 alterCharIndex;
    NNSG2dCharWidths defaultWidth;
    u8 encoding;
    NNSG2dFontGlyph *pGlyph;
    NNSG2dFontWidth *pWidth;
    NNSG2dFontCodeMap *pMap;
} NNSG2dFontInformation;
typedef u16 (*NNSiG2dSplitCharCallback)(const void **ppChar);
typedef struct NNSG2dFont {
    NNSG2dFontInformation *pRes;
    NNSiG2dSplitCharCallback cbCharSpliter;
} NNSG2dFont;
typedef struct NNSG2dTextRect {
    int width;
    int height;
} NNSG2dTextRect;
inline s8 NNS_G2dFontGetLineFeed(const NNSG2dFont *pFont) {
    ((void) 0);
    return pFont->pRes->linefeed;
}
inline NNSiG2dSplitCharCallback NNSi_G2dFontGetSpliter(const NNSG2dFont *pFont) {
    ((void) 0);
    return pFont->cbCharSpliter;
}
extern int func_02036e50(const NNSG2dFont *pFont, int vSpace, const void *txt);
#pragma thumb off
int func_02036e50(const NNSG2dFont *pFont, int vSpace, const void *txt) {
    const void *pos     = txt;
    int lines           = 1;
    NNSG2dTextRect rect = {0, 0};
    u16 c;
    NNSiG2dSplitCharCallback getNextChar;

    ((void) 0);
    ((void) 0);
    ;

    getNextChar = NNSi_G2dFontGetSpliter(pFont);

    while ((c = getNextChar((const void **) &pos)) != 0) {
        if (c == '\n') {
            lines++;
        }
    }

    return lines * (NNS_G2dFontGetLineFeed(pFont) + vSpace) - vSpace;
}
