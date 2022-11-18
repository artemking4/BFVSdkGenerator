// Object: ClientBFUIGetVehicleInfoEntity
// ClassId: 6466
// RuntimeId: 24235
// TypeInfo: 0x0000000144CC3790
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetVehicleInfoEntity : public Entity::Entity {
        char pad_0x20[0x70];
    }; // 0x90
    static_assert(sizeof(ClientBFUIGetVehicleInfoEntity) == 0x90);
}