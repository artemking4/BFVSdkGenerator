// Object: ServerStatMessageSenderEntity
// ClassId: 7732
// RuntimeId: 33111
// TypeInfo: 0x0000000144CEEB80
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerStatMessageSenderEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerStatMessageSenderEntity) == 0x30);
}