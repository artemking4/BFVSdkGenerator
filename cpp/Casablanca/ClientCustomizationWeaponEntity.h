// Object: ClientCustomizationWeaponEntity
// ClassId: 7856
// RuntimeId: 30636
// TypeInfo: 0x0000000144C8FFE0
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ClientCustomizationWeaponEntity : public Entity::SpatialEntity {
        char pad_0x30[0x3F0];
    }; // 0x420
    static_assert(sizeof(ClientCustomizationWeaponEntity) == 0x420);
}