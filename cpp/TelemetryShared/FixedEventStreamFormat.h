// Object: FixedEventStreamFormat
// ClassId: 784
// RuntimeId: 42652
// TypeInfo: 0x0000000144F5EAE0
#include "../TelemetryShared/EventTelemetryStreamFormat.h"
#include "../TelemetryShared/TelemetryLogEvent.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class FixedEventStreamFormat : public TelemetryShared::EventTelemetryStreamFormat {
        TelemetryShared::TelemetryLogEvent ReferenceEvent; // 0x20
    }; // 0x28
    static_assert(sizeof(FixedEventStreamFormat) == 0x28);
}
#pragma pack(pop)