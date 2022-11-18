// Object: ClientBFUIGetAvailableWeaponAppearancesEntity
// ClassId: 6417
// RuntimeId: 22829
// TypeInfo: 0x0000000144CC62A0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetAvailableWeaponAppearancesEntity : public Entity::Entity {
        char pad_0x20[0x100];
    }; // 0x120
    static_assert(sizeof(ClientBFUIGetAvailableWeaponAppearancesEntity) == 0x120);
}