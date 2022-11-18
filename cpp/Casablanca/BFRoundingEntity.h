// Object: BFRoundingEntity
// ClassId: 6227
// RuntimeId: 47728
// TypeInfo: 0x0000000144CCEC30
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFRoundingEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(BFRoundingEntity) == 0x40);
}