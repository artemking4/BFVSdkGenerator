// Object: ClientProxyProjectileEntity
// ClassId: 7918
// RuntimeId: 19914
// TypeInfo: 0x0000000144F76320
#include "../Weapon/ClientProjectileEntity.h"

namespace Weapon {
    class ClientProxyProjectileEntity : public Weapon::ClientProjectileEntity {
        char pad_0x270[0x170];
    }; // 0x3E0
    static_assert(sizeof(ClientProxyProjectileEntity) == 0x3E0);
}