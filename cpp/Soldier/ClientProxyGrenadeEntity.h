// Object: ClientProxyGrenadeEntity
// ClassId: 7921
// RuntimeId: 8879
// TypeInfo: 0x0000000144F34370
#include "../Weapon/ClientProxyProjectileEntity.h"

namespace Soldier {
    class ClientProxyGrenadeEntity : public Weapon::ClientProxyProjectileEntity {
        char pad_0x3E0[0x60];
    }; // 0x440
    static_assert(sizeof(ClientProxyGrenadeEntity) == 0x440);
}