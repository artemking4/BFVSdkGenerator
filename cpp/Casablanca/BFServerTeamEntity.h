// Object: BFServerTeamEntity
// ClassId: 6240
// RuntimeId: 14669
// TypeInfo: 0x0000000144C62790
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFServerTeamEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(BFServerTeamEntity) == 0x40);
}