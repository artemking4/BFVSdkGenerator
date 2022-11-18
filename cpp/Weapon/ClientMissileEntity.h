// Object: ClientMissileEntity
// ClassId: 7916
// RuntimeId: 55301
// TypeInfo: 0x0000000144F76100
#include "../Weapon/ClientGhostProjectileEntity.h"

namespace Weapon {
    class ClientMissileEntity : public Weapon::ClientGhostProjectileEntity {
        char pad_0x480[0x590];
    }; // 0xA10
    static_assert(sizeof(ClientMissileEntity) == 0xA10);
}