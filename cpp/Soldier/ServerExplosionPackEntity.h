// Object: ServerExplosionPackEntity
// ClassId: 7961
// RuntimeId: 32690
// TypeInfo: 0x0000000144F32F90
#include "../Weapon/ServerGhostProjectileEntity.h"

namespace Soldier {
    class ServerExplosionPackEntity : public Weapon::ServerGhostProjectileEntity {
        char pad_0x4F0[0x1C0];
    }; // 0x6B0
    static_assert(sizeof(ServerExplosionPackEntity) == 0x6B0);
}