// Object: PropertySpamFilterEntity
// ClassId: 7335
// RuntimeId: 50411
// TypeInfo: 0x0000000144C96D90
#include "../Entity/Entity.h"

namespace Casablanca {
    class PropertySpamFilterEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(PropertySpamFilterEntity) == 0x60);
}