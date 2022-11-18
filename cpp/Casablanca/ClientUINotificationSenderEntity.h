// Object: ClientUINotificationSenderEntity
// ClassId: 6976
// RuntimeId: 19717
// TypeInfo: 0x0000000144CB5460
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUINotificationSenderEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClientUINotificationSenderEntity) == 0x48);
}