// Object: ClientGhostProjectileEntity
// ClassId: 7909
// RuntimeId: 6751
// TypeInfo: 0x0000000144F76430
#include "../Weapon/ClientProjectileEntity.h"

namespace Weapon {
    class ClientGhostProjectileEntity : public Weapon::ClientProjectileEntity {
        char pad_0x270[0x210];
    }; // 0x480
    static_assert(sizeof(ClientGhostProjectileEntity) == 0x480);
}