// Object: ClientBFUISlotEquippedWeaponEntity
// ClassId: 6575
// RuntimeId: 46532
// TypeInfo: 0x0000000144CC8530
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISlotEquippedWeaponEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ClientBFUISlotEquippedWeaponEntity) == 0x68);
}