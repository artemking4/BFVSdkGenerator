// Object: ServerAttachableFlameEntity
// ClassId: 7956
// RuntimeId: 59999
// TypeInfo: 0x0000000144C3B850
#include "../Weapon/ServerProjectileEntity.h"

namespace Casablanca {
    class ServerAttachableFlameEntity : public Weapon::ServerProjectileEntity {
        char pad_0x2F0[0x190];
    }; // 0x480
    static_assert(sizeof(ServerAttachableFlameEntity) == 0x480);
}