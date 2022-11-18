// Object: EventTelemetryStream
// ClassId: 8572
// RuntimeId: 10040
// TypeInfo: 0x0000000144F53660
#include "../Telemetry/TelemetryStream.h"

namespace Telemetry {
    class EventTelemetryStream : public Telemetry::TelemetryStream {
        char pad_0x40[0x8];
    }; // 0x48
    static_assert(sizeof(EventTelemetryStream) == 0x48);
}