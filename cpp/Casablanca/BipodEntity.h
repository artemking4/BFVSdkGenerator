// Object: BipodEntity
// ClassId: 6257
// RuntimeId: 29443
// TypeInfo: 0x0000000144CCE900
#include "../Entity/Entity.h"

namespace Casablanca {
    class BipodEntity : public Entity::Entity {
        char pad_0x20[0x130];
    }; // 0x150
    static_assert(sizeof(BipodEntity) == 0x150);
}