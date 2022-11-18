// Object: ServerSquadReinforcementReservedEntity
// ClassId: 7729
// RuntimeId: 25203
// TypeInfo: 0x0000000144CE2340
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerSquadReinforcementReservedEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ServerSquadReinforcementReservedEntity) == 0x68);
}