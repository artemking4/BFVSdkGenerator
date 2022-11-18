// Object: ClientUIVehicleSeatWeaponStatusInfoEntity
// ClassId: 7022
// RuntimeId: 43865
// TypeInfo: 0x0000000144C587C0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIVehicleSeatWeaponStatusInfoEntity : public Entity::Entity {
        char pad_0x20[0xD8];
    }; // 0xF8
    static_assert(sizeof(ClientUIVehicleSeatWeaponStatusInfoEntity) == 0xF8);
}