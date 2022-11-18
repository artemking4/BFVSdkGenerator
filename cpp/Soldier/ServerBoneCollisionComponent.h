// Object: ServerBoneCollisionComponent
// ClassId: 5954
// RuntimeId: 30350
// TypeInfo: 0x0000000144F32F10
#include "../GameServer/ServerGameComponent.h"

namespace Soldier {
    class ServerBoneCollisionComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x98];
    }; // 0xD0
    static_assert(sizeof(ServerBoneCollisionComponent) == 0xD0);
}