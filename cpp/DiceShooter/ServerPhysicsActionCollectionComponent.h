// Object: ServerPhysicsActionCollectionComponent
// ClassId: 6020
// RuntimeId: 51495
// TypeInfo: 0x0000000144DCB7E0
#include "../GameServer/ServerGameComponent.h"

namespace DiceShooter {
    class ServerPhysicsActionCollectionComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x98];
    }; // 0xD0
    static_assert(sizeof(ServerPhysicsActionCollectionComponent) == 0xD0);
}