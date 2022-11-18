// Object: ClientPhysicsEntity
// ClassId: 7893
// RuntimeId: 56604
// TypeInfo: 0x0000000144E33B50
#include "../GameClient/ClientGameComponentEntity.h"

namespace GameClient {
    class ClientPhysicsEntity : public GameClient::ClientGameComponentEntity {
        char pad_0x188[0x20];
    }; // 0x1A8
    static_assert(sizeof(ClientPhysicsEntity) == 0x1A8);
}