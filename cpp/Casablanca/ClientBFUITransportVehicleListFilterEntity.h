// Object: ClientBFUITransportVehicleListFilterEntity
// ClassId: 6596
// RuntimeId: 35300
// TypeInfo: 0x0000000144CAFC20
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUITransportVehicleListFilterEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ClientBFUITransportVehicleListFilterEntity) == 0x80);
}