// Object: ClientBFUISelectVehicleSlotEntity
// ClassId: 6565
// RuntimeId: 35375
// TypeInfo: 0x0000000144CC8CA0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISelectVehicleSlotEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientBFUISelectVehicleSlotEntity) == 0x38);
}