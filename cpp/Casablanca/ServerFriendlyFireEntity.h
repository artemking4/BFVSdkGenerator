// Object: ServerFriendlyFireEntity
// ClassId: 7561
// RuntimeId: 64101
// TypeInfo: 0x0000000144CE6FD0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerFriendlyFireEntity : public Entity::Entity {
        char pad_0x20[0x120];
    }; // 0x140
    static_assert(sizeof(ServerFriendlyFireEntity) == 0x140);
}