// Object: VeniceServerBulletEntity
// ClassId: 7958
// RuntimeId: 63520
// TypeInfo: 0x0000000144CDF890
#include "../Weapon/ServerBulletEntity.h"

namespace Casablanca {
    class VeniceServerBulletEntity : public Weapon::ServerBulletEntity {
        char pad_0x3F0[0x30];
    }; // 0x420
    static_assert(sizeof(VeniceServerBulletEntity) == 0x420);
}