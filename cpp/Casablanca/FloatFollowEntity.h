// Object: FloatFollowEntity
// ClassId: 7175
// RuntimeId: 17080
// TypeInfo: 0x0000000144CCE3B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class FloatFollowEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(FloatFollowEntity) == 0x80);
}