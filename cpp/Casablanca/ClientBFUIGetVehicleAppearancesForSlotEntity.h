// Object: ClientBFUIGetVehicleAppearancesForSlotEntity
// ClassId: 6465
// RuntimeId: 40904
// TypeInfo: 0x0000000144CC39B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetVehicleAppearancesForSlotEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(ClientBFUIGetVehicleAppearancesForSlotEntity) == 0xB0);
}