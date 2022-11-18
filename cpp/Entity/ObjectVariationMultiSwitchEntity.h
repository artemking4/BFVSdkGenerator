// Object: ObjectVariationMultiSwitchEntity
// ClassId: 7278
// RuntimeId: 2717
// TypeInfo: 0x0000000144ECFCC0
#include "../Entity/Entity.h"

namespace Entity {
    class ObjectVariationMultiSwitchEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ObjectVariationMultiSwitchEntity) == 0x40);
}