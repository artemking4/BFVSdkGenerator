// Object: ClientBFUIVehicleSeatInfoEntity
// ClassId: 6605
// RuntimeId: 31191
// TypeInfo: 0x0000000144CBFE00
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIVehicleSeatInfoEntity : public Entity::Entity {
        char pad_0x20[0x68];
    }; // 0x88
    static_assert(sizeof(ClientBFUIVehicleSeatInfoEntity) == 0x88);
}