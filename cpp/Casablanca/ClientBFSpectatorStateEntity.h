// Object: ClientBFSpectatorStateEntity
// ClassId: 6358
// RuntimeId: 31018
// TypeInfo: 0x0000000144CCC730
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFSpectatorStateEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientBFSpectatorStateEntity) == 0x60);
}