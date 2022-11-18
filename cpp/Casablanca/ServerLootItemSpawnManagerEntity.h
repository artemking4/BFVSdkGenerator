// Object: ServerLootItemSpawnManagerEntity
// ClassId: 7598
// RuntimeId: 7536
// TypeInfo: 0x0000000144C5EAD0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerLootItemSpawnManagerEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerLootItemSpawnManagerEntity) == 0x30);
}