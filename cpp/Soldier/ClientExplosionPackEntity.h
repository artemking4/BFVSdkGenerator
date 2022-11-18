// Object: ClientExplosionPackEntity
// ClassId: 7910
// RuntimeId: 55954
// TypeInfo: 0x0000000144F346A0
#include "../Weapon/ClientGhostProjectileEntity.h"

namespace Soldier {
    class ClientExplosionPackEntity : public Weapon::ClientGhostProjectileEntity {
        char pad_0x480[0xF0];
    }; // 0x570
    static_assert(sizeof(ClientExplosionPackEntity) == 0x570);
}