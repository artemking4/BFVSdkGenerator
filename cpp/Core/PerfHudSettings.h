// Object: PerfHudSettings
// ClassId: 4408
// RuntimeId: 50
// TypeInfo: 0x0000000144BE33E0
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace Core {
    class PerfHudSettings : public Core::DataContainer {
        CString TimerCategorySetName; // 0x18
        Int32 HudRightMargin; // 0x20
        Int32 HudTopMargin; // 0x24
        Boolean Enable; // 0x28
        Boolean DrawCpuEnable; // 0x29
        Boolean DrawGpuEnable; // 0x2A
        Boolean DrawSpuEnable; // 0x2B
        Boolean DrawFrameRateBucketsEnable; // 0x2C
        Boolean FrameRateBucketsResetOnLevelChange; // 0x2D
        Boolean FrameRateBucketsResetOnEnable; // 0x2E
        Boolean SimpleSummaryMode; // 0x2F
        Boolean TimerCategorySetsEnable; // 0x30
        Boolean DrawUngroupedTimings; // 0x31
        Boolean DrawConfigFile; // 0x32
        Uint8 HudAlpha; // 0x33
        Boolean HudCompact; // 0x34
        Boolean DrawOverBudgetOnly; // 0x35
        Boolean DrawDisplayString; // 0x36
        char pad_0x37[0x1];
    }; // 0x38
    static_assert(sizeof(PerfHudSettings) == 0x38);
}
#pragma pack(pop)