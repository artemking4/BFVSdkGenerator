// Object: ClientBFUISlotEquippedVehicleEntity
// ClassId: 6572
// RuntimeId: 39524
// TypeInfo: 0x0000000144CC8860
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISlotEquippedVehicleEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ClientBFUISlotEquippedVehicleEntity) == 0x68);
}