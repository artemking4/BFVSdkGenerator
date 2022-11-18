// Object: ClientBFUIGetAvailableVehicleWeaponsEntity
// ClassId: 6414
// RuntimeId: 61298
// TypeInfo: 0x0000000144CC63B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetAvailableVehicleWeaponsEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(ClientBFUIGetAvailableVehicleWeaponsEntity) == 0xC0);
}