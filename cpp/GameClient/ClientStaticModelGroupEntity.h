// Object: ClientStaticModelGroupEntity
// ClassId: 7926
// RuntimeId: 31859
// TypeInfo: 0x0000000144E33240
#include "../GameClient/ClientPhysicsEntity.h"

namespace GameClient {
    class ClientStaticModelGroupEntity : public GameClient::ClientPhysicsEntity {
        char pad_0x1A8[0xA0];
    }; // 0x248
    static_assert(sizeof(ClientStaticModelGroupEntity) == 0x248);
}