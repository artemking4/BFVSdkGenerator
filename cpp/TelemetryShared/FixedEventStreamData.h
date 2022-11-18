// Object: FixedEventStreamData
// ClassId: 770
// RuntimeId: 59113
// TypeInfo: 0x0000000144F5E7E0
#include "../TelemetryShared/EventStreamData.h"
#include "../TelemetryShared/FixedEventStreamFormat.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class FixedEventStreamData : public TelemetryShared::EventStreamData {
        TelemetryShared::FixedEventStreamFormat Format; // 0x30
    }; // 0x38
    static_assert(sizeof(FixedEventStreamData) == 0x38);
}
#pragma pack(pop)