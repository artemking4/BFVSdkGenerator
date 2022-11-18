// Object: TransactionalTelemetryHookEntity
// ClassId: 8098
// RuntimeId: 1639
// TypeInfo: 0x0000000144F53000
#include "../Entity/Entity.h"

namespace Telemetry {
    class TransactionalTelemetryHookEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(TransactionalTelemetryHookEntity) == 0x40);
}