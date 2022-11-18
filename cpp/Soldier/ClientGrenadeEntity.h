// Object: ClientGrenadeEntity
// ClassId: 7913
// RuntimeId: 32848
// TypeInfo: 0x0000000144F34590
#include "../Weapon/ClientGhostProjectileEntity.h"

namespace Soldier {
    class ClientGrenadeEntity : public Weapon::ClientGhostProjectileEntity {
        char pad_0x480[0x130];
    }; // 0x5B0
    static_assert(sizeof(ClientGrenadeEntity) == 0x5B0);
}