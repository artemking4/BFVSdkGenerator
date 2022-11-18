// Object: ClientSpawnerGroupEntity
// ClassId: 6868
// RuntimeId: 17020
// TypeInfo: 0x0000000144C54770
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientSpawnerGroupEntity : public Entity::Entity {
        char pad_0x20[0x410];
    }; // 0x430
    static_assert(sizeof(ClientSpawnerGroupEntity) == 0x430);
}