// Object: PropertySelectEntity
// ClassId: 7334
// RuntimeId: 57095
// TypeInfo: 0x0000000144DB1290
#include "../Entity/Entity.h"

namespace DiceCommons {
    class PropertySelectEntity : public Entity::Entity {
        char pad_0x20[0x68];
    }; // 0x88
    static_assert(sizeof(PropertySelectEntity) == 0x88);
}