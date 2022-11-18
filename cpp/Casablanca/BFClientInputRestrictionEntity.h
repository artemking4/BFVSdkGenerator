// Object: BFClientInputRestrictionEntity
// ClassId: 6196
// RuntimeId: 5651
// TypeInfo: 0x0000000144C49AF0
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFClientInputRestrictionEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(BFClientInputRestrictionEntity) == 0x30);
}