// Object: ServerCoopSquadReinforcementEntity
// ClassId: 7473
// RuntimeId: 44076
// TypeInfo: 0x0000000144CDEA30
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerCoopSquadReinforcementEntity : public Entity::Entity {
        char pad_0x20[0x950];
    }; // 0x970
    static_assert(sizeof(ServerCoopSquadReinforcementEntity) == 0x970);
}