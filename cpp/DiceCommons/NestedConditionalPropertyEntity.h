// Object: NestedConditionalPropertyEntity
// ClassId: 7268
// RuntimeId: 5059
// TypeInfo: 0x0000000144DB14B0
#include "../Entity/Entity.h"

namespace DiceCommons {
    class NestedConditionalPropertyEntity : public Entity::Entity {
        char pad_0x20[0x80];
    }; // 0xA0
    static_assert(sizeof(NestedConditionalPropertyEntity) == 0xA0);
}