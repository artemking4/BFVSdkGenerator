// Object: ClientBFUIGetVehicleSpawnPointEntity
// ClassId: 6469
// RuntimeId: 6247
// TypeInfo: 0x0000000144CB0170
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetVehicleSpawnPointEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientBFUIGetVehicleSpawnPointEntity) == 0x58);
}