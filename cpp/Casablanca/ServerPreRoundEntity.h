// Object: ServerPreRoundEntity
// ClassId: 7673
// RuntimeId: 36461
// TypeInfo: 0x0000000144CEB390
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPreRoundEntity : public Entity::Entity {
        char pad_0x20[0xC8];
    }; // 0xE8
    static_assert(sizeof(ServerPreRoundEntity) == 0xE8);
}