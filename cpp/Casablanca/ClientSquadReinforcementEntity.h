// Object: ClientSquadReinforcementEntity
// ClassId: 6875
// RuntimeId: 5731
// TypeInfo: 0x0000000144CD7890
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientSquadReinforcementEntity : public Entity::Entity {
        char pad_0x20[0x110];
    }; // 0x130
    static_assert(sizeof(ClientSquadReinforcementEntity) == 0x130);
}