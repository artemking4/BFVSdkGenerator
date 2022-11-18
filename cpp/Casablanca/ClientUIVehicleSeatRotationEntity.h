// Object: ClientUIVehicleSeatRotationEntity
// ClassId: 7021
// RuntimeId: 48208
// TypeInfo: 0x0000000144CAE0A0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIVehicleSeatRotationEntity : public Entity::Entity {
        char pad_0x20[0x120];
    }; // 0x140
    static_assert(sizeof(ClientUIVehicleSeatRotationEntity) == 0x140);
}