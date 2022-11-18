// Object: AngleDamageEntity
// ClassId: 6183
// RuntimeId: 19645
// TypeInfo: 0x0000000144CCF070
#include "../Entity/Entity.h"

namespace Casablanca {
    class AngleDamageEntity : public Entity::Entity {
        char pad_0x20[0x170];
    }; // 0x190
    static_assert(sizeof(AngleDamageEntity) == 0x190);
}