// Object: VeniceServerMissileEntity
// ClassId: 7968
// RuntimeId: 3956
// TypeInfo: 0x0000000144CDF780
#include "../Weapon/ServerMissileEntity.h"

namespace Casablanca {
    class VeniceServerMissileEntity : public Weapon::ServerMissileEntity {
        char pad_0x5C0[0x30];
    }; // 0x5F0
    static_assert(sizeof(VeniceServerMissileEntity) == 0x5F0);
}