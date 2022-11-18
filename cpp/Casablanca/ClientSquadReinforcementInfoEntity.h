// Object: ClientSquadReinforcementInfoEntity
// ClassId: 6876
// RuntimeId: 60249
// TypeInfo: 0x0000000144CD7780
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientSquadReinforcementInfoEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientSquadReinforcementInfoEntity) == 0x58);
}