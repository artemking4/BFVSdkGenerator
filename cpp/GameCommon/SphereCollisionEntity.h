// Object: SphereCollisionEntity
// ClassId: 8058
// RuntimeId: 6975
// TypeInfo: 0x0000000144E4FEE0
#include "../Entity/Entity.h"

namespace GameCommon {
    class SphereCollisionEntity : public Entity::Entity {
        char pad_0x20[0x80];
    }; // 0xA0
    static_assert(sizeof(SphereCollisionEntity) == 0xA0);
}