// Object: ClientCoopSquadReinforcementEntity
// ClassId: 6646
// RuntimeId: 10970
// TypeInfo: 0x0000000144CD0180
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientCoopSquadReinforcementEntity : public Entity::Entity {
        char pad_0x20[0xF8];
    }; // 0x118
    static_assert(sizeof(ClientCoopSquadReinforcementEntity) == 0x118);
}