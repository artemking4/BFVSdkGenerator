// Object: FixedStreamTelemetryHookEntity
// ClassId: 7168
// RuntimeId: 2471
// TypeInfo: 0x0000000144F53900
#include "../Entity/Entity.h"

namespace Telemetry {
    class FixedStreamTelemetryHookEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(FixedStreamTelemetryHookEntity) == 0x40);
}