// Object: TimingViewSettings
// ClassId: 5189
// RuntimeId: 62746
// TypeInfo: 0x0000000144BE32E0
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Float64.h"

#pragma pack(push, 8)
namespace Core {
    class TimingViewSettings : public Core::DataContainer {
        Uint32 FrameCount; // 0x18
        Uint32 FrameDelayCount; // 0x1C
        Uint32 FrameCountToReport; // 0x20
        Float32 TimeRange; // 0x24
        Float32 TimeOffset; // 0x28
        Float32 LogThreshold; // 0x2C
        Float32 AutolockThreshold; // 0x30
        char pad_0x34[0x4];
        CString AutolockNameFilter; // 0x38
        Int32 LegendScreenOffset; // 0x40
        Int32 LegendColumnWidth; // 0x44
        Int32 LegendDisplayMode; // 0x48
        Int32 AverageFrameCount; // 0x4C
        CString SnoopEventName; // 0x50
        CString FilterEventName; // 0x58
        Float64 BarMinTime; // 0x60
        Uint32 BarHeight; // 0x68
        Uint32 BarPad; // 0x6C
        Int32 BarSyncProcessor; // 0x70
        Int32 MaxCpuLegendColumnCount; // 0x74
        Int32 MaxGpuLegendColumnCount; // 0x78
        Int32 MaxSpuLegendColumnCount; // 0x7C
        Uint32 MaxFrameEventCount; // 0x80
        Boolean Enable; // 0x84
        Boolean DrawEnable; // 0x85
        Boolean DrawBarsEnable; // 0x86
        Boolean DrawLegendEnable; // 0x87
        Boolean DrawCpuLegendEnable; // 0x88
        Boolean DrawGpuLegendEnable; // 0x89
        Boolean DrawSpuLegendEnable; // 0x8A
        Boolean SnoopEnable; // 0x8B
        Boolean SnoopOnly; // 0x8C
        Boolean SortByTime; // 0x8D
        Boolean FilterEnable; // 0x8E
        Boolean CollectionEnable; // 0x8F
    }; // 0x90
    static_assert(sizeof(TimingViewSettings) == 0x90);
}
#pragma pack(pop)