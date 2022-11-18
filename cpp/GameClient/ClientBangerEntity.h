// Object: ClientBangerEntity
// ClassId: 7895
// RuntimeId: 20123
// TypeInfo: 0x0000000144E43380
#include "../GameClient/ClientPhysicsEntity.h"

namespace GameClient {
    class ClientBangerEntity : public GameClient::ClientPhysicsEntity {
        char pad_0x1A8[0x178];
    }; // 0x320
    static_assert(sizeof(ClientBangerEntity) == 0x320);
}