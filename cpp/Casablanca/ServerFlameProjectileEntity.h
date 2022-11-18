// Object: ServerFlameProjectileEntity
// ClassId: 7959
// RuntimeId: 1422
// TypeInfo: 0x0000000144C3DDC0
#include "../Weapon/ServerProjectileEntity.h"

namespace Casablanca {
    class ServerFlameProjectileEntity : public Weapon::ServerProjectileEntity {
        char pad_0x2F0[0x10];
    }; // 0x300
    static_assert(sizeof(ServerFlameProjectileEntity) == 0x300);
}