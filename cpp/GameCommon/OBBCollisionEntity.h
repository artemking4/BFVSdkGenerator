// Object: OBBCollisionEntity
// ClassId: 7270
// RuntimeId: 36107
// TypeInfo: 0x0000000144E50100
#include "../Entity/Entity.h"

namespace GameCommon {
    class OBBCollisionEntity : public Entity::Entity {
        char pad_0x20[0x80];
    }; // 0xA0
    static_assert(sizeof(OBBCollisionEntity) == 0xA0);
}