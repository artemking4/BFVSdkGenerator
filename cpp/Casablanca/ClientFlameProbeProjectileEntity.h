// Object: ClientFlameProbeProjectileEntity
// ClassId: 7907
// RuntimeId: 30467
// TypeInfo: 0x0000000144CD1EF0
#include "../Weapon/ClientProjectileEntity.h"

namespace Casablanca {
    class ClientFlameProbeProjectileEntity : public Weapon::ClientProjectileEntity {
        char pad_0x270[0x140];
    }; // 0x3B0
    static_assert(sizeof(ClientFlameProbeProjectileEntity) == 0x3B0);
}