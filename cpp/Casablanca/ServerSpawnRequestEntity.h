// Object: ServerSpawnRequestEntity
// ClassId: 7719
// RuntimeId: 64667
// TypeInfo: 0x0000000144CEAE40
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerSpawnRequestEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerSpawnRequestEntity) == 0x30);
}