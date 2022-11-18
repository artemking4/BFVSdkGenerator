// Object: ClientWallOfDeathEntity
// ClassId: 7051
// RuntimeId: 47410
// TypeInfo: 0x0000000144C4C050
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientWallOfDeathEntity : public Entity::Entity {
        char pad_0x20[0x2B40];
    }; // 0x2B60
    static_assert(sizeof(ClientWallOfDeathEntity) == 0x2B60);
}