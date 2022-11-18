// Object: ServerGhostProjectileEntity
// ClassId: 7960
// RuntimeId: 52546
// TypeInfo: 0x0000000144F74DF0
#include "../Weapon/ServerProjectileEntity.h"

namespace Weapon {
    class ServerGhostProjectileEntity : public Weapon::ServerProjectileEntity {
        char pad_0x2F0[0x200];
    }; // 0x4F0
    static_assert(sizeof(ServerGhostProjectileEntity) == 0x4F0);
}