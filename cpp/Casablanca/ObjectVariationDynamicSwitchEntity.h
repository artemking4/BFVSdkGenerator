// Object: ObjectVariationDynamicSwitchEntity
// ClassId: 7277
// RuntimeId: 42369
// TypeInfo: 0x0000000144C94500
#include "../Entity/Entity.h"

namespace Casablanca {
    class ObjectVariationDynamicSwitchEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ObjectVariationDynamicSwitchEntity) == 0x60);
}