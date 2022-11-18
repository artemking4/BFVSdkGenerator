// Object: ClientPhysicsEntityWithPoseProvider
// ClassId: 7901
// RuntimeId: 39028
// TypeInfo: 0x0000000144E33D70
#include "../GameClient/ClientPhysicsEntity.h"

namespace GameClient {
    class ClientPhysicsEntityWithPoseProvider : public GameClient::ClientPhysicsEntity {
        char pad_0x1A8[0x10];
    }; // 0x1B8
    static_assert(sizeof(ClientPhysicsEntityWithPoseProvider) == 0x1B8);
}