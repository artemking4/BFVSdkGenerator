// Object: ClientBFUIGetAvailableWeaponAppearanceSetsEntity
// ClassId: 6416
// RuntimeId: 61528
// TypeInfo: 0x0000000144CC6190
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetAvailableWeaponAppearanceSetsEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(ClientBFUIGetAvailableWeaponAppearanceSetsEntity) == 0x78);
}