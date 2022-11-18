// Object: ServerSquadReinforcementControlEntity
// ClassId: 7726
// RuntimeId: 18625
// TypeInfo: 0x0000000144CEAB10
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerSquadReinforcementControlEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ServerSquadReinforcementControlEntity) == 0x38);
}