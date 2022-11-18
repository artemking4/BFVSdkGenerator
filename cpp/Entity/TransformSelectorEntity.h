// Object: TransformSelectorEntity
// ClassId: 8106
// RuntimeId: 64789
// TypeInfo: 0x0000000144ECEDE0
#include "../Entity/Entity.h"

namespace Entity {
    class TransformSelectorEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(TransformSelectorEntity) == 0x68);
}