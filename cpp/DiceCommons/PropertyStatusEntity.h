// Object: PropertyStatusEntity
// ClassId: 7336
// RuntimeId: 55578
// TypeInfo: 0x0000000144DB1180
#include "../Entity/Entity.h"

namespace DiceCommons {
    class PropertyStatusEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(PropertyStatusEntity) == 0x78);
}