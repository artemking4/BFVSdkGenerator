// Object: ServerPersistenceReinforcementEntity
// ClassId: 7634
// RuntimeId: 19243
// TypeInfo: 0x0000000144CED0D0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistenceReinforcementEntity : public Entity::Entity {
        char pad_0x20[0xA8];
    }; // 0xC8
    static_assert(sizeof(ServerPersistenceReinforcementEntity) == 0xC8);
}