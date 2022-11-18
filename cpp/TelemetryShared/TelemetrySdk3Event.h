// Object: TelemetrySdk3Event
// ClassId: 5151
// RuntimeId: 31180
// TypeInfo: 0x0000000144F5ED60
#include "../TelemetryShared/TelemetryLogEvent.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdk3Event : public TelemetryShared::TelemetryLogEvent {
        Uint32 ModuleId; // 0x18
        Uint32 GroupId; // 0x1C
        Uint32 StringId; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(TelemetrySdk3Event) == 0x28);
}
#pragma pack(pop)