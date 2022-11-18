// Object: TeamIdToIntEntity
// ClassId: 8085
// RuntimeId: 12289
// TypeInfo: 0x0000000144C96620
#include "../Entity/Entity.h"

namespace Casablanca {
    class TeamIdToIntEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(TeamIdToIntEntity) == 0x40);
}