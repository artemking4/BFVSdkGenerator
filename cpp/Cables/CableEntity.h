// Object: CableEntity
// ClassId: 6282
// RuntimeId: 49568
// TypeInfo: 0x0000000144C1AFD0
#include "../Entity/Entity.h"

namespace Cables {
    class CableEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(CableEntity) == 0x70);
}