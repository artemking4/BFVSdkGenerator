// Object: ServerSpawnAreaEntity
// ClassId: 7717
// RuntimeId: 45253
// TypeInfo: 0x0000000144CE0330
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerSpawnAreaEntity : public Entity::Entity {
        char pad_0x20[0x1300];
    }; // 0x1320
    static_assert(sizeof(ServerSpawnAreaEntity) == 0x1320);
}