// Object: ClientBFUIGetWeaponAppearancesForSlotEntity
// ClassId: 6475
// RuntimeId: 60162
// TypeInfo: 0x0000000144CC3240
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetWeaponAppearancesForSlotEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(ClientBFUIGetWeaponAppearancesForSlotEntity) == 0xB0);
}