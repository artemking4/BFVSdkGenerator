// Object: ServerSquadReinforcementListenerEntity
// ClassId: 7728
// RuntimeId: 16291
// TypeInfo: 0x0000000144CE2450
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerSquadReinforcementListenerEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ServerSquadReinforcementListenerEntity) == 0x40);
}