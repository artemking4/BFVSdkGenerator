// Object: DeltaFloatEntity
// ClassId: 7111
// RuntimeId: 28764
// TypeInfo: 0x0000000144CCE6E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class DeltaFloatEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(DeltaFloatEntity) == 0x48);
}