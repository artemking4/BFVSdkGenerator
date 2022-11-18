// Object: ClientProjectileEntity
// ClassId: 7903
// RuntimeId: 42032
// TypeInfo: 0x0000000144F75EE0
#include "../GameClient/ClientPhysicsEntity.h"

namespace Weapon {
    class ClientProjectileEntity : public GameClient::ClientPhysicsEntity {
        char pad_0x1A8[0xC8];
    }; // 0x270
    static_assert(sizeof(ClientProjectileEntity) == 0x270);
}