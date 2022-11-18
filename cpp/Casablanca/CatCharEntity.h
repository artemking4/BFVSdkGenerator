// Object: CatCharEntity
// ClassId: 6298
// RuntimeId: 13643
// TypeInfo: 0x0000000144CCE2A0
#include "../Entity/Entity.h"

namespace Casablanca {
    class CatCharEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(CatCharEntity) == 0x58);
}