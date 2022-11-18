// Object: RosterEntity
// ClassId: 7362
// RuntimeId: 23202
// TypeInfo: 0x0000000144CE5340
#include "../Entity/Entity.h"

namespace Casablanca {
    class RosterEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(RosterEntity) == 0x58);
}