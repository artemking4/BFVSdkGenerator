// Object: ClientProxyMissileEntity
// ClassId: 7922
// RuntimeId: 42485
// TypeInfo: 0x0000000144F75FF0
#include "../Weapon/ClientProxyProjectileEntity.h"

namespace Weapon {
    class ClientProxyMissileEntity : public Weapon::ClientProxyProjectileEntity {
        char pad_0x3E0[0x10];
    }; // 0x3F0
    static_assert(sizeof(ClientProxyMissileEntity) == 0x3F0);
}