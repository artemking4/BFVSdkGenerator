// Object: ClientBFUISlotEquippedVehicleWeaponEntity
// ClassId: 6573
// RuntimeId: 46449
// TypeInfo: 0x0000000144CC8750
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISlotEquippedVehicleWeaponEntity : public Entity::Entity {
        char pad_0x20[0x68];
    }; // 0x88
    static_assert(sizeof(ClientBFUISlotEquippedVehicleWeaponEntity) == 0x88);
}