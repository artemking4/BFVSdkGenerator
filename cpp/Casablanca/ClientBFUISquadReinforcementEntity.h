// Object: ClientBFUISquadReinforcementEntity
// ClassId: 6593
// RuntimeId: 13406
// TypeInfo: 0x0000000144C5A020
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISquadReinforcementEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientBFUISquadReinforcementEntity) == 0x60);
}