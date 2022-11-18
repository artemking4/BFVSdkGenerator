// Object: ServerSquadReinforcementEntity
// ClassId: 7727
// RuntimeId: 29786
// TypeInfo: 0x0000000144CEAA00
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerSquadReinforcementEntity : public Entity::Entity {
        char pad_0x20[0x958];
    }; // 0x978
    static_assert(sizeof(ServerSquadReinforcementEntity) == 0x978);
}