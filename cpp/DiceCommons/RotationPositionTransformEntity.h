// Object: RotationPositionTransformEntity
// ClassId: 7363
// RuntimeId: 29209
// TypeInfo: 0x0000000144DA85B0
#include "../Entity/Entity.h"

namespace DiceCommons {
    class RotationPositionTransformEntity : public Entity::Entity {
        char pad_0x20[0xC0];
    }; // 0xE0
    static_assert(sizeof(RotationPositionTransformEntity) == 0xE0);
}