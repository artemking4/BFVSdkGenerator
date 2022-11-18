// Object: ServerSpawnpointTestingEntity
// ClassId: 7720
// RuntimeId: 60376
// TypeInfo: 0x0000000144CE0220
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerSpawnpointTestingEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ServerSpawnpointTestingEntity) == 0x50);
}