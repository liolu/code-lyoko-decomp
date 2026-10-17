/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* WmDataSharingSendDataSet from https://github.com/ntrtwl/NitroSDK libraries/wm/src/wm_ds.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
typedef u32 OSIntrMode;
extern OSIntrMode func_0200b040(void);
extern OSIntrMode func_0200b054(OSIntrMode state);
extern void func_0200bb7c(u16 data, void *destp, u32 size);
static inline void MI_CpuFill16(void *dest, u16 data, u32 size) {
    ((void) 0);
    ((void) 0);

    func_0200bb7c(data, dest, size);
}
static inline void MI_CpuClear16(void *dest, u32 size) {
    MI_CpuFill16(dest, 0, size);
}
typedef enum WMPriorityLevel {
    WM_PRIORITY_URGENT = 0,
    WM_PRIORITY_HIGH,
    WM_PRIORITY_NORMAL,
    WM_PRIORITY_LOW
} WMPriorityLevel;
typedef enum WMErrCode {
    WM_ERRCODE_SUCCESS            = 0,
    WM_ERRCODE_FAILED             = 1,
    WM_ERRCODE_OPERATING          = 2,
    WM_ERRCODE_ILLEGAL_STATE      = 3,
    WM_ERRCODE_WM_DISABLE         = 4,
    WM_ERRCODE_NO_KEYSET          = 5,
    WM_ERRCODE_NO_DATASET         = 5,
    WM_ERRCODE_INVALID_PARAM      = 6,
    WM_ERRCODE_NO_CHILD           = 7,
    WM_ERRCODE_FIFO_ERROR         = 8,
    WM_ERRCODE_TIMEOUT            = 9,
    WM_ERRCODE_SEND_QUEUE_FULL    = 10,
    WM_ERRCODE_NO_ENTRY           = 11,
    WM_ERRCODE_OVER_MAX_ENTRY     = 12,
    WM_ERRCODE_INVALID_POLLBITMAP = 13,
    WM_ERRCODE_NO_DATA            = 14,
    WM_ERRCODE_SEND_FAILED        = 15,
    WM_ERRCODE_DCF_TEST,
    WM_ERRCODE_WL_INVALID_PARAM,
    WM_ERRCODE_WL_LENGTH_ERR,
    WM_ERRCODE_FLASH_ERROR,
    WM_ERRCODE_MAX
} WMErrCode;
typedef enum WMDataSharingState {
    WM_DS_STATE_READY = 0,
    WM_DS_STATE_START,
    WM_DS_STATE_PAUSING,
    WM_DS_STATE_PAUSED,
    WM_DS_STATE_RETRY_SEND,
    WM_DS_STATE_ERROR
} WMDataSharingState;
typedef void (*WMCallbackFunc)(void *arg);
typedef struct WMDataSet {
    u16 aidBitmap;
    u16 receivedBitmap;
    u16 data[508 / sizeof(u16)];
} WMDataSet;
typedef struct WMDataSharingInfo {
    WMDataSet ds[4];
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
    u16 reserved[1];
} WMDataSharingInfo;
extern WMErrCode func_02015650(WMCallbackFunc callback, void *arg, const u16 *sendData, u16 sendDataSize, u16 destBitmap,
                               u16 port, u16 prio);
extern u16 func_02013ddc(void);
extern const u16(*ctrdgi_fl_maxtime);
extern void func_02015fc0(void *callback);
extern void func_02015a9c(WMDataSharingInfo *dsInfo, BOOL delayed);
static inline u16 WmDataSharingGetNextIndex(u32 index) {
    return (u16) ((index + 1) % 4);
}
void func_02015fc0(void *callback);
void func_02015a9c(WMDataSharingInfo *dsInfo, BOOL delayed) {
    OSIntrMode enabled;

    enabled = func_0200b040();

    if (dsInfo->ds[dsInfo->writeIndex].aidBitmap == 0) {
        u16 newWI, oldWI, resetWI;
        WMErrCode res;
        u16 connectedAIDs;

        ((void) 0);

        connectedAIDs = func_02013ddc();
        oldWI         = dsInfo->writeIndex;
        newWI         = WmDataSharingGetNextIndex(oldWI);
        if (dsInfo->doubleMode == 1) {
            resetWI = WmDataSharingGetNextIndex(newWI);
        } else {
            resetWI = newWI;
        }
        ((void) 0);

        MI_CpuClear16(&dsInfo->ds[resetWI], sizeof(WMDataSet));

        dsInfo->ds[resetWI].aidBitmap = (u16) (dsInfo->aidBitmap & (connectedAIDs | 0x0001));
        dsInfo->writeIndex            = newWI;
        dsInfo->ds[oldWI].aidBitmap   = dsInfo->aidBitmap;

        if (delayed == 1) {
            dsInfo->ds[oldWI].aidBitmap &= ~0x0001;
        }

        (void) func_0200b054(enabled);
        res = func_02015650(func_02015fc0, dsInfo, (u16 *) &dsInfo->ds[oldWI], dsInfo->dataSetLength,
                            (u16) (dsInfo->aidBitmap & connectedAIDs), dsInfo->port, WM_PRIORITY_HIGH);
        if (res == WM_ERRCODE_NO_CHILD) {
            ((void) 0);

            dsInfo->seqNum[oldWI] = 0xffff;
            dsInfo->sendIndex     = WmDataSharingGetNextIndex(dsInfo->sendIndex);
        } else {
            if (res != WM_ERRCODE_SUCCESS && res != WM_ERRCODE_OPERATING) {
                ((void) 0);
                dsInfo->state = WM_DS_STATE_ERROR;
            }
        }
    } else {
        (void) func_0200b054(enabled);
    }
}
