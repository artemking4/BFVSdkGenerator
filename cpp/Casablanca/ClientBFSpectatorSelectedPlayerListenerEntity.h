// Object: ClientBFSpectatorSelectedPlayerListenerEntity
// ClassId: 6355
// RuntimeId: 25047
// TypeInfo: 0x0000000144CCCA60
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFSpectatorSelectedPlayerListenerEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientBFSpectatorSelectedPlayerListenerEntity) == 0x50);
}