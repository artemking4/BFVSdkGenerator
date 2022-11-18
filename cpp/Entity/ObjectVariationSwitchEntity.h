// Object: ObjectVariationSwitchEntity
// ClassId: 7280
// RuntimeId: 3442
// TypeInfo: 0x0000000144ECFBB0
#include "../Entity/Entity.h"

namespace Entity {
    class ObjectVariationSwitchEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ObjectVariationSwitchEntity) == 0x40);
}