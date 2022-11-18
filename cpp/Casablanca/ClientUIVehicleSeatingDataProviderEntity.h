// Object: ClientUIVehicleSeatingDataProviderEntity
// ClassId: 7023
// RuntimeId: 2921
// TypeInfo: 0x0000000144CAE2C0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIVehicleSeatingDataProviderEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ClientUIVehicleSeatingDataProviderEntity) == 0x70);
}