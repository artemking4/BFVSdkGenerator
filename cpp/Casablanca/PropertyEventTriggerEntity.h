// Object: PropertyEventTriggerEntity
// ClassId: 7331
// RuntimeId: 22321
// TypeInfo: 0x0000000144CD9D90
#include "../Entity/Entity.h"

namespace Casablanca {
    class PropertyEventTriggerEntity : public Entity::Entity {
        char pad_0x20[0xB0];
    }; // 0xD0
    static_assert(sizeof(PropertyEventTriggerEntity) == 0xD0);
}