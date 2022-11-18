// Object: TransactionalTelemetryStream
// ClassId: 8573
// RuntimeId: 27579
// TypeInfo: 0x0000000144F53560
#include "../Telemetry/TelemetryStream.h"

namespace Telemetry {
    class TransactionalTelemetryStream : public Telemetry::TelemetryStream {
        char pad_0x40[0x18];
    }; // 0x58
    static_assert(sizeof(TransactionalTelemetryStream) == 0x58);
}