// Object: LakeShapeEntity
// ClassId: 7208
// RuntimeId: 58052
// TypeInfo: 0x0000000144BDDFB0
#include "../Entity/Entity.h"

namespace Ambience {
    class LakeShapeEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(LakeShapeEntity) == 0x30);
}