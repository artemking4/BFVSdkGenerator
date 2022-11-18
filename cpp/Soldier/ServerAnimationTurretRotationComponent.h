// Object: ServerAnimationTurretRotationComponent
// ClassId: 5947
// RuntimeId: 59297
// TypeInfo: 0x0000000144F30290
#include "../GameServer/ServerGameComponent.h"

namespace Soldier {
    class ServerAnimationTurretRotationComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x68];
    }; // 0xA0
    static_assert(sizeof(ServerAnimationTurretRotationComponent) == 0xA0);
}