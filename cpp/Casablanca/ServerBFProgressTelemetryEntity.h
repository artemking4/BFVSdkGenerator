// Object: ServerBFProgressTelemetryEntity
// ClassId: 7450
// RuntimeId: 55181
// TypeInfo: 0x0000000144CDED10
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerBFProgressTelemetryEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerBFProgressTelemetryEntity) == 0x30);
}