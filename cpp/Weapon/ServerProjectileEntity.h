// Object: ServerProjectileEntity
// ClassId: 7955
// RuntimeId: 2378
// TypeInfo: 0x0000000144F74B50
#include "../GameServer/ServerPhysicsEntity.h"

namespace Weapon {
    class ServerProjectileEntity : public GameServer::ServerPhysicsEntity {
        char pad_0x198[0x158];
    }; // 0x2F0
    static_assert(sizeof(ServerProjectileEntity) == 0x2F0);
}