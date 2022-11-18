// Object: FactionEntity
// ClassId: 7166
// RuntimeId: 43325
// TypeInfo: 0x0000000144CCE4C0
#include "../Entity/Entity.h"

namespace Casablanca {
    class FactionEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(FactionEntity) == 0x80);
}