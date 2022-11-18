// Object: VarEventStreamData
// ClassId: 771
// RuntimeId: 1930
// TypeInfo: 0x0000000144F5E760
#include "../TelemetryShared/EventStreamData.h"
#include "../TelemetryShared/VariableEventStreamFormat.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class VarEventStreamData : public TelemetryShared::EventStreamData {
        TelemetryShared::VariableEventStreamFormat Format; // 0x30
    }; // 0x38
    static_assert(sizeof(VarEventStreamData) == 0x38);
}
#pragma pack(pop)