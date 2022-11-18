// Object: ClientFlameProjectileEntity
// ClassId: 7908
// RuntimeId: 61569
// TypeInfo: 0x0000000144CD1DE0
#include "../Weapon/ClientProjectileEntity.h"

namespace Casablanca {
    class ClientFlameProjectileEntity : public Weapon::ClientProjectileEntity {
        char pad_0x270[0x140];
    }; // 0x3B0
    static_assert(sizeof(ClientFlameProjectileEntity) == 0x3B0);
}