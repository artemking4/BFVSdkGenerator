// Object: ClientSquadReinforcementOrderEntity
// ClassId: 6877
// RuntimeId: 60129
// TypeInfo: 0x0000000144CD7670
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientSquadReinforcementOrderEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(ClientSquadReinforcementOrderEntity) == 0xB0);
}