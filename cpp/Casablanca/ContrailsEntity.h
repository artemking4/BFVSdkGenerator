// Object: ContrailsEntity
// ClassId: 7094
// RuntimeId: 20268
// TypeInfo: 0x0000000144C4BD20
#include "../Entity/Entity.h"

namespace Casablanca {
    class ContrailsEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(ContrailsEntity) == 0xB0);
}