// Object: BoolChangedEventEntity
// ClassId: 6277
// RuntimeId: 39112
// TypeInfo: 0x0000000144C96FB0
#include "../Entity/Entity.h"

namespace Casablanca {
    class BoolChangedEventEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(BoolChangedEventEntity) == 0x48);
}