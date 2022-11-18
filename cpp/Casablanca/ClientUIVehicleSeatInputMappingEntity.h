// Object: ClientUIVehicleSeatInputMappingEntity
// ClassId: 7019
// RuntimeId: 61762
// TypeInfo: 0x0000000144CAE1B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIVehicleSeatInputMappingEntity : public Entity::Entity {
        char pad_0x20[0x80];
    }; // 0xA0
    static_assert(sizeof(ClientUIVehicleSeatInputMappingEntity) == 0xA0);
}