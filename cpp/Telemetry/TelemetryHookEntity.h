// Object: TelemetryHookEntity
// ClassId: 8087
// RuntimeId: 37230
// TypeInfo: 0x0000000144F536E0
#include "../Entity/Entity.h"

namespace Telemetry {
    class TelemetryHookEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(TelemetryHookEntity) == 0x38);
}