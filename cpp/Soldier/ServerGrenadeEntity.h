// Object: ServerGrenadeEntity
// ClassId: 7964
// RuntimeId: 34077
// TypeInfo: 0x0000000144F30DA0
#include "../Weapon/ServerGhostProjectileEntity.h"

namespace Soldier {
    class ServerGrenadeEntity : public Weapon::ServerGhostProjectileEntity {
        char pad_0x4F0[0x150];
    }; // 0x640
    static_assert(sizeof(ServerGrenadeEntity) == 0x640);
}