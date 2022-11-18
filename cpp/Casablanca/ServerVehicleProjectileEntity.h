// Object: ServerVehicleProjectileEntity
// ClassId: 7969
// RuntimeId: 49474
// TypeInfo: 0x0000000144C64640
#include "../Weapon/ServerProjectileEntity.h"

namespace Casablanca {
    class ServerVehicleProjectileEntity : public Weapon::ServerProjectileEntity {
        char pad_0x2F0[0x30];
    }; // 0x320
    static_assert(sizeof(ServerVehicleProjectileEntity) == 0x320);
}