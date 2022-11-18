// Object: DoorManagerEntity
// ClassId: 7127
// RuntimeId: 42425
// TypeInfo: 0x0000000144C8CD80
#include "../Entity/Entity.h"

namespace Casablanca {
    class DoorManagerEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(DoorManagerEntity) == 0x38);
}