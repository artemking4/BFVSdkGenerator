// Object: ClientBFUIGetVehicleListEntity
// ClassId: 6467
// RuntimeId: 63317
// TypeInfo: 0x0000000144CC0020
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetVehicleListEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUIGetVehicleListEntity) == 0x40);
}