// Object: ServerBulletEntity
// ClassId: 7957
// RuntimeId: 30676
// TypeInfo: 0x0000000144F74C60
#include "../Weapon/ServerProjectileEntity.h"

namespace Weapon {
    class ServerBulletEntity : public Weapon::ServerProjectileEntity {
        char pad_0x2F0[0x100];
    }; // 0x3F0
    static_assert(sizeof(ServerBulletEntity) == 0x3F0);
}