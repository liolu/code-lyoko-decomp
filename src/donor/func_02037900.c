/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* DrawGlyph1D from https://github.com/RonyxDumb/mkds src/arm9/02023548_G2d_Sprite_ClearArea2.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
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
typedef struct NNSG2dGlyph {
    const NNSG2dCharWidths *pWidths;
    const u8 *image;
} NNSG2dGlyph;
inline u8 NNS_G2dFontGetCellHeight(const NNSG2dFont *pFont) {
    ((void) 0);
    return pFont->pRes->pGlyph->cellHeight;
}
inline u8 NNS_G2dFontGetCellWidth(const NNSG2dFont *pFont) {
    ((void) 0);
    return pFont->pRes->pGlyph->cellWidth;
}
inline u8 NNS_G2dFontGetBpp(const NNSG2dFont *pFont) {
    ((void) 0);
    return pFont->pRes->pGlyph->bpp;
}
typedef void (*NNSiG2dDrawGlyphFunc)(const struct NNSG2dCharCanvas *pCC, const NNSG2dFont *pFont, int x, int y, int cl,
                                     const NNSG2dGlyph *pGlyph);
typedef void (*NNSiG2dClearFunc)(const struct NNSG2dCharCanvas *pCC, int cl);
typedef void (*NNSiG2dClearAreaFunc)(const struct NNSG2dCharCanvas *pCC, int cl, int x, int y, int w, int h);
typedef struct NNSiG2dCharCanvasVTable {
    NNSiG2dDrawGlyphFunc pDrawGlyph;
    NNSiG2dClearFunc pClear;
    NNSiG2dClearAreaFunc pClearArea;
} NNSiG2dCharCanvasVTable;
typedef struct NNSG2dCharCanvas {
    u8 *charBase;
    int areaWidth;
    int areaHeight;
    u8 dstBpp;
    u8 reserved[3];
    u32 param;
    const NNSiG2dCharCanvasVTable *vtable;
} NNSG2dCharCanvas;
typedef struct LC_INFO {
    const u8 *dst;
    const u8 *src;
    int ofs_x;
    int ofs_y;
    int width;
    int height;
    int dsrc;
    int srcBpp;
    int dstBpp;
    u32 cl;
} LC_INFO;
typedef union OBJ1DParam {
    u32 packed;
    struct {
        unsigned baseWidthShift : 8;
        unsigned baseHeightShift : 8;
    };
} OBJ1DParam;
extern void func_02037900(const NNSG2dCharCanvas *pCC, const NNSG2dFont *pFont, int x, int y, int cl,
                          const NNSG2dGlyph *pGlyph);
static inline int GetCharacterSize(const NNSG2dCharCanvas *pCC) {
    ((void) 0);
    return 8 * 8 * pCC->dstBpp / 8;
}
u32 func_02037f04(u32 cx, u32 cy, u32 areaWidth, u32 areaHeight, u32 objWidth, u32 objHeight);
void func_02037b24(LC_INFO *i);
void func_02037900(const NNSG2dCharCanvas *pCC, const NNSG2dFont *pFont, int x, int y, int cl, const NNSG2dGlyph *pGlyph) {
    int ofs_x_base;
    int ofs_x;
    int ofs_y;
    int ofs_x_end;
    int ofs_y_end;
    int cx, cx_base;
    int cy;
    u8 glyphWidth;
    u8 charHeight;
    int charSize;
    u16 *mapTable;

    ((void) 0);
    ((void) 0);
    ((void) 0);
    ((void) 0);
    ((void) 0)

        ;

    charSize = GetCharacterSize(pCC);
    mapTable = (u16 *) (pCC->param);

    {
        int chara_x_num;
        int chara_y_num;
        const unsigned int areaWidth         = (unsigned int) pCC->areaWidth;
        const unsigned int areaHeight        = (unsigned int) pCC->areaHeight;
        const NNSG2dCharWidths *const pWidth = pGlyph->pWidths;

        u32 chara_x_begin;
        u32 chara_x_last;
        u32 chara_y_begin;
        u32 chara_y_last;

        glyphWidth = pWidth->glyphWidth;
        charHeight = NNS_G2dFontGetCellHeight(pFont);

        if (glyphWidth <= 0) {
            return;
        }

        if ((x + glyphWidth < 0) || (y + charHeight) < 0) {
            return;
        }

        chara_x_begin = (x <= 0) ? 0 : ((u32) x / 8);
        chara_y_begin = (y <= 0) ? 0 : ((u32) y / 8);

        chara_x_last = (u32) (x + glyphWidth + (8 - 1)) / 8;
        if (chara_x_last >= areaWidth) {
            chara_x_last = areaWidth;
        }
        chara_y_last = (u32) (y + charHeight + (8 - 1)) / 8;
        if (chara_y_last >= areaHeight) {
            chara_y_last = areaHeight;
        }

        chara_x_num = (int) (chara_x_last - chara_x_begin);
        chara_y_num = (int) (chara_y_last - chara_y_begin);

        if ((chara_x_num < 0) || (chara_y_num < 0)) {
            return;
        }

        cx_base = (int) chara_x_begin;
        cy      = (int) chara_y_begin;

        ofs_x_base = (x < 0) ? x : x & 0x7;
        ofs_y      = (y < 0) ? y : y & 0x7;
        ofs_x_end  = ofs_x_base - 8 * chara_x_num;
        ofs_y_end  = ofs_y - 8 * chara_y_num;
    }

    {
        LC_INFO i;
        u8 *const pCharBase = pCC->charBase;
        OBJ1DParam p;

        i.src    = pGlyph->image;
        i.width  = glyphWidth;
        i.height = charHeight;
        i.cl     = (u32) (cl - 1);
        i.srcBpp = NNS_G2dFontGetBpp(pFont);
        i.dstBpp = pCC->dstBpp;
        i.dsrc   = NNS_G2dFontGetCellWidth(pFont) * i.srcBpp;

        p.packed = pCC->param;

        {
            const u32 areaWidth       = (u32) pCC->areaWidth;
            const u32 areaHeight      = (u32) pCC->areaHeight;
            const u32 baseWidthShift  = p.baseWidthShift;
            const u32 baseHeightShift = p.baseHeightShift;

            for (; ofs_y > ofs_y_end; ofs_y -= 8) {
                i.ofs_y = ofs_y;
                cx      = cx_base;
                for (ofs_x = ofs_x_base; ofs_x > ofs_x_end; ofs_x -= 8) {
                    const unsigned int iChar =
                        func_02037f04((u32) cx, (u32) cy, areaWidth, areaHeight, baseWidthShift, baseHeightShift);

                    i.ofs_x = ofs_x;
                    i.dst   = pCharBase + iChar * charSize;

                    func_02037b24(&i);
                    cx++;
                }
                cy++;
            }
        }
    }
}
