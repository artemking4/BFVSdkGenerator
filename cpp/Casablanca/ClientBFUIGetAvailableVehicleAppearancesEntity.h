// Object: ClientBFUIGetAvailableVehicleAppearancesEntity
// ClassId: 6413
// RuntimeId: 28836
// TypeInfo: 0x0000000144CC65D0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetAvailableVehicleAppearancesEntity : public Entity::Entity {
        char pad_0x20[0xC0];
    }; // 0xE0
    static_assert(sizeof(ClientBFUIGetAvailableVehicleAppearancesEntity) == 0xE0);
}