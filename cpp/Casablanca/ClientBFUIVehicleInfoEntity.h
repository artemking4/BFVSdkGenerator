// Object: ClientBFUIVehicleInfoEntity
// ClassId: 6600
// RuntimeId: 58972
// TypeInfo: 0x0000000144CBFF10
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIVehicleInfoEntity : public Entity::Entity {
        char pad_0x20[0x100];
    }; // 0x120
    static_assert(sizeof(ClientBFUIVehicleInfoEntity) == 0x120);
}