/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207e370 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/wm/wm_ds.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
extern u32 func_0200b040(void);
extern u32 func_0200b054(u32 state);
extern void func_0200bb94(const void *src, void *dest, u32 size);
extern void func_0200bb7c(u16 value, void *dest, u32 size);
typedef struct UnkWmDataSet {
    u16 aidBitmap;
    u16 receivedBitmap;
    u16 data[14];
    u16 childData[240];
} UnkWmDataSet;
typedef struct UnkWmDataSharingInfo {
    UnkWmDataSet ds[4];
    u16 seqNum[4];
    u16 writeIndex;
    u16 sendIndex;
    u16 readIndex;
    u16 aidBitmap;
    u16 dataLength;
    u16 stationNumber;
    u16 dataSetLength;
    u16 port;
    u16 doubleMode;
    u16 currentSeqNum;
    u16 state;
    u16 reserved;
} UnkWmDataSharingInfo;
extern void func_02015c10(UnkWmDataSharingInfo *dsInfo, u16 aid, u16 *data);
extern u16 *func_020159f4(UnkWmDataSharingInfo *dsInfo, u32 aidBitmap, u16 *data, u32 aid);
void func_02015c10(UnkWmDataSharingInfo *dsInfo, u16 aid, u16 *data) {
    u16 aidBit = (u16) (1 << aid);
    u16 index;
    u32 enabled;

    if (!(dsInfo->aidBitmap & aidBit)) {
        return;
    }
    index = dsInfo->writeIndex;
    if (!(dsInfo->ds[index].aidBitmap & aidBit)) {
        if (dsInfo->doubleMode != 1) {
            return;
        }
        index = (u16) ((index + 1) & 3);
        if (!(dsInfo->ds[index].aidBitmap & aidBit)) {
            return;
        }
    }

    {
        u16 *buf = func_020159f4(dsInfo, dsInfo->aidBitmap, dsInfo->ds[index].data, aid);
        if (data != 0) {
            func_0200bb94(data, buf, dsInfo->dataLength);
        } else {
            func_0200bb7c(0, buf, dsInfo->dataLength);
        }
    }

    enabled = func_0200b040();
    dsInfo->ds[index].aidBitmap &= ~aidBit;
    dsInfo->ds[index].receivedBitmap |= aidBit;
    func_0200b054(enabled);
}
u16 *func_020159f4(UnkWmDataSharingInfo *dsInfo, u32 aidBitmap, u16 *data, u32 aid);
