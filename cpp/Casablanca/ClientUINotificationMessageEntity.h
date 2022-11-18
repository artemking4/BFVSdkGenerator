// Object: ClientUINotificationMessageEntity
// ClassId: 6974
// RuntimeId: 59735
// TypeInfo: 0x0000000144CB68E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUINotificationMessageEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientUINotificationMessageEntity) == 0x38);
}