// Object: VarStreamTelemetryHookEntity
// ClassId: 8242
// RuntimeId: 19490
// TypeInfo: 0x0000000144F52EF0
#include "../Entity/Entity.h"

namespace Telemetry {
    class VarStreamTelemetryHookEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(VarStreamTelemetryHookEntity) == 0x40);
}