// Object: ClientStaticModelEntity
// ClassId: 7923
// RuntimeId: 28981
// TypeInfo: 0x0000000144E32F10
#include "../GameClient/ClientPhysicsEntity.h"

namespace GameClient {
    class ClientStaticModelEntity : public GameClient::ClientPhysicsEntity {
        char pad_0x1A8[0x1F8];
    }; // 0x3A0
    static_assert(sizeof(ClientStaticModelEntity) == 0x3A0);
}