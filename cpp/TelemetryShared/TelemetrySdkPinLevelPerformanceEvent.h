// Object: TelemetrySdkPinLevelPerformanceEvent
// ClassId: 5085
// RuntimeId: 115
// TypeInfo: 0x0000000144F59760
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../Global/Uint16.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinLevelPerformanceEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString platform; // 0x100
        CString fpsBuckets; // 0x108
        Float32 fpsAverage; // 0x110
        Float32 dynamicResolutionScaleAverage; // 0x114
        Float32 lowestMemoryFree; // 0x118
        Float32 levelLoadingTime; // 0x11C
        Float32 levelGhostingTime; // 0x120
        Uint32 maxplayers; // 0x124
        Float32 secondsCaptured; // 0x128
        Uint32 binaryType; // 0x12C
        Uint16 FieldFlagChanged0; // 0x130
        char pad_0x132[0x6];
    }; // 0x138
    static_assert(sizeof(TelemetrySdkPinLevelPerformanceEvent) == 0x138);
}
#pragma pack(pop)