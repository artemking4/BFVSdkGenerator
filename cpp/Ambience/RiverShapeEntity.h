// Object: RiverShapeEntity
// ClassId: 7360
// RuntimeId: 44254
// TypeInfo: 0x0000000144BDDEA0
#include "../Entity/Entity.h"

namespace Ambience {
    class RiverShapeEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(RiverShapeEntity) == 0x30);
}