// Object: ClientBFUISelectVehicleEntity
// ClassId: 6564
// RuntimeId: 9410
// TypeInfo: 0x0000000144CA5BF0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISelectVehicleEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUISelectVehicleEntity) == 0x40);
}