// Object: TransformSnapToGroundEntity
// ClassId: 8107
// RuntimeId: 20672
// TypeInfo: 0x0000000144E4F330
#include "../Entity/Entity.h"

namespace GameCommon {
    class TransformSnapToGroundEntity : public Entity::Entity {
        char pad_0x20[0x180];
    }; // 0x1A0
    static_assert(sizeof(TransformSnapToGroundEntity) == 0x1A0);
}