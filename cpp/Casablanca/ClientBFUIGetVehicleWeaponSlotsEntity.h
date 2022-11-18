// Object: ClientBFUIGetVehicleWeaponSlotsEntity
// ClassId: 6470
// RuntimeId: 41654
// TypeInfo: 0x0000000144CC3460
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetVehicleWeaponSlotsEntity : public Entity::Entity {
        char pad_0x20[0x80];
    }; // 0xA0
    static_assert(sizeof(ClientBFUIGetVehicleWeaponSlotsEntity) == 0xA0);
}