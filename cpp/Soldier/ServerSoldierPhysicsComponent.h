// Object: ServerSoldierPhysicsComponent
// ClassId: 6108
// RuntimeId: 16949
// TypeInfo: 0x0000000144F32790
#include "../GameServer/ServerCharacterMasterPhysicsComponent.h"

namespace Soldier {
    class ServerSoldierPhysicsComponent : public GameServer::ServerCharacterMasterPhysicsComponent {
        char pad_0xA0[0x40];
    }; // 0xE0
    static_assert(sizeof(ServerSoldierPhysicsComponent) == 0xE0);
}