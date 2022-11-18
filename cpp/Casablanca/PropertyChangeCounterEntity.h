// Object: PropertyChangeCounterEntity
// ClassId: 7327
// RuntimeId: 14789
// TypeInfo: 0x0000000144C4B9F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class PropertyChangeCounterEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(PropertyChangeCounterEntity) == 0x50);
}