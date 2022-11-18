// Object: ServerVehicleTestEntity
// ClassId: 7784
// RuntimeId: 10957
// TypeInfo: 0x0000000144C63010
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerVehicleTestEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ServerVehicleTestEntity) == 0x50);
}