// Object: ClientControllableEntity
// ClassId: 7896
// RuntimeId: 43368
// TypeInfo: 0x0000000144E399C0
#include "../GameClient/ClientPhysicsEntity.h"

namespace GameClient {
    class ClientControllableEntity : public GameClient::ClientPhysicsEntity {
        char pad_0x1A8[0x190];
    }; // 0x338
    static_assert(sizeof(ClientControllableEntity) == 0x338);
}