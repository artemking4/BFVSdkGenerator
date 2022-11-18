// Object: ClientBulletEntity
// ClassId: 7905
// RuntimeId: 23403
// TypeInfo: 0x0000000144F76210
#include "../Weapon/ClientProjectileEntity.h"

namespace Weapon {
    class ClientBulletEntity : public Weapon::ClientProjectileEntity {
        char pad_0x270[0x270];
    }; // 0x4E0
    static_assert(sizeof(ClientBulletEntity) == 0x4E0);
}