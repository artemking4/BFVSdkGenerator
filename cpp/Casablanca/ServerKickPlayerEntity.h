// Object: ServerKickPlayerEntity
// ClassId: 7582
// RuntimeId: 21353
// TypeInfo: 0x0000000144C5D2F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerKickPlayerEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ServerKickPlayerEntity) == 0x40);
}