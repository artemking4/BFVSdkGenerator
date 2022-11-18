// Object: ServerFootprintConduitEntity
// ClassId: 7558
// RuntimeId: 39271
// TypeInfo: 0x0000000144C3FD00
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerFootprintConduitEntity : public Entity::Entity {
        char pad_0x20[0x130];
    }; // 0x150
    static_assert(sizeof(ServerFootprintConduitEntity) == 0x150);
}