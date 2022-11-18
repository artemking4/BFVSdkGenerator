// Object: BFClientTeamEntity
// ClassId: 6203
// RuntimeId: 31427
// TypeInfo: 0x0000000144C497C0
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFClientTeamEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(BFClientTeamEntity) == 0x50);
}