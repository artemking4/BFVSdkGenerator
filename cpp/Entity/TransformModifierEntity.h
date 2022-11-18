// Object: TransformModifierEntity
// ClassId: 8104
// RuntimeId: 49741
// TypeInfo: 0x0000000144ECDDF0
#include "../Entity/Entity.h"

namespace Entity {
    class TransformModifierEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(TransformModifierEntity) == 0x38);
}