// Object: ServerMissileEntity
// ClassId: 7967
// RuntimeId: 26059
// TypeInfo: 0x0000000144F74930
#include "../Weapon/ServerGhostProjectileEntity.h"

namespace Weapon {
    class ServerMissileEntity : public Weapon::ServerGhostProjectileEntity {
        char pad_0x4F0[0xD0];
    }; // 0x5C0
    static_assert(sizeof(ServerMissileEntity) == 0x5C0);
}