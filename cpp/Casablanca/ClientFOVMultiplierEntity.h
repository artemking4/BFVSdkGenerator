// Object: ClientFOVMultiplierEntity
// ClassId: 6697
// RuntimeId: 37027
// TypeInfo: 0x0000000144CD5B50
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientFOVMultiplierEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientFOVMultiplierEntity) == 0x30);
}