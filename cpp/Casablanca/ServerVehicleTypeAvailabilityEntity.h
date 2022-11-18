// Object: ServerVehicleTypeAvailabilityEntity
// ClassId: 7785
// RuntimeId: 48523
// TypeInfo: 0x0000000144C64B90
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerVehicleTypeAvailabilityEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ServerVehicleTypeAvailabilityEntity) == 0x38);
}