// Object: ObjectVariationReferenceEntity
// ClassId: 7279
// RuntimeId: 44363
// TypeInfo: 0x0000000144C943F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ObjectVariationReferenceEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ObjectVariationReferenceEntity) == 0x30);
}