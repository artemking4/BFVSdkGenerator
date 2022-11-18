// Object: ClientBFUIPlayerSpectatorEntity
// ClassId: 6528
// RuntimeId: 24337
// TypeInfo: 0x0000000144CCC0D0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIPlayerSpectatorEntity : public Entity::Entity {
        char pad_0x20[0xE8];
    }; // 0x108
    static_assert(sizeof(ClientBFUIPlayerSpectatorEntity) == 0x108);
}