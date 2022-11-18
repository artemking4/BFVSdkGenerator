// Object: ClientBFUIGetVehicleLoadoutEntity
// ClassId: 6468
// RuntimeId: 14312
// TypeInfo: 0x0000000144CC3680
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetVehicleLoadoutEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(ClientBFUIGetVehicleLoadoutEntity) == 0xB0);
}