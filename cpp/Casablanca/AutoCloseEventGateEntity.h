// Object: AutoCloseEventGateEntity
// ClassId: 6192
// RuntimeId: 51154
// TypeInfo: 0x0000000144CCEF60
#include "../Entity/Entity.h"

namespace Casablanca {
    class AutoCloseEventGateEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(AutoCloseEventGateEntity) == 0x38);
}