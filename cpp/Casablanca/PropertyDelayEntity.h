// Object: PropertyDelayEntity
// ClassId: 7330
// RuntimeId: 2189
// TypeInfo: 0x0000000144CD9A60
#include "../Entity/Entity.h"

namespace Casablanca {
    class PropertyDelayEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(PropertyDelayEntity) == 0x80);
}