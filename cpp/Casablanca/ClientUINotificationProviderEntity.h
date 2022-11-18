// Object: ClientUINotificationProviderEntity
// ClassId: 6975
// RuntimeId: 2612
// TypeInfo: 0x0000000144CB5570
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUINotificationProviderEntity : public Entity::Entity {
        char pad_0x20[0x98];
    }; // 0xB8
    static_assert(sizeof(ClientUINotificationProviderEntity) == 0xB8);
}