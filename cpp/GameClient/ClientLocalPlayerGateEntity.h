// Object: ClientLocalPlayerGateEntity
// ClassId: 6743
// RuntimeId: 1898
// TypeInfo: 0x0000000144E33C60
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientLocalPlayerGateEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientLocalPlayerGateEntity) == 0x30);
}