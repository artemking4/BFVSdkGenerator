// Object: ClientBFUIPlayerVehicleInfoEntity
// ClassId: 6529
// RuntimeId: 10334
// TypeInfo: 0x0000000144CBF020
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIPlayerVehicleInfoEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ClientBFUIPlayerVehicleInfoEntity) == 0x70);
}