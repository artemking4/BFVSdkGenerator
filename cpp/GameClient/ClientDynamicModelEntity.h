// Object: ClientDynamicModelEntity
// ClassId: 7900
// RuntimeId: 22738
// TypeInfo: 0x0000000144E43270
#include "../GameClient/ClientPhysicsEntity.h"

namespace GameClient {
    class ClientDynamicModelEntity : public GameClient::ClientPhysicsEntity {
        char pad_0x1A8[0x90];
    }; // 0x238
    static_assert(sizeof(ClientDynamicModelEntity) == 0x238);
}