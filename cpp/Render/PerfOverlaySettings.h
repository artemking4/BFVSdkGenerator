// Object: PerfOverlaySettings
// ClassId: 4410
// RuntimeId: 42052
// TypeInfo: 0x0000000144F20C80
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Global/Uint8.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Render {
    class PerfOverlaySettings : public Core::DataContainer {
        Uint32 DrawGraphMethod; // 0x18
        Uint32 DrawFpsMethod; // 0x1C
        Float32 FcatWidth; // 0x20
        Uint32 LegendDisplayFormat; // 0x24
        Float32 FpsTimePeriod; // 0x28
        Int32 FpsDisplayFormat; // 0x2C
        Float32 FpsDisplayScale; // 0x30
        Int32 FpsDisplayOffsetX; // 0x34
        Int32 FpsDisplayOffsetY; // 0x38
        Float32 DrawFrameIndexSize; // 0x3C
        Boolean Enable; // 0x40
        Boolean DrawGraph; // 0x41
        Boolean DrawCpuGraph; // 0x42
        Boolean DrawGpuGraph; // 0x43
        Boolean DrawFrameGraph; // 0x44
        Boolean DrawVblankGraph; // 0x45
        Boolean DrawFps; // 0x46
        Boolean DrawFcat; // 0x47
        Uint8 FpsDisplayAlpha; // 0x48
        Boolean TargetFpsIs60; // 0x49
        Boolean GpuProfilerEnable; // 0x4A
        Boolean FrameFileLogEnable; // 0x4B
        char pad_0x4C[0x4];
    }; // 0x50
    static_assert(sizeof(PerfOverlaySettings) == 0x50);
}
#pragma pack(pop)