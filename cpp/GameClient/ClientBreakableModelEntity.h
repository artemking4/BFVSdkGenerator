// Object: ClientBreakableModelEntity
// ClassId: 7902
// RuntimeId: 50552
// TypeInfo: 0x0000000144E3E620
#include "../GameClient/ClientPhysicsEntityWithPoseProvider.h"

namespace GameClient {
    class ClientBreakableModelEntity : public GameClient::ClientPhysicsEntityWithPoseProvider {
        char pad_0x1B8[0xE8];
    }; // 0x2A0
    static_assert(sizeof(ClientBreakableModelEntity) == 0x2A0);
}