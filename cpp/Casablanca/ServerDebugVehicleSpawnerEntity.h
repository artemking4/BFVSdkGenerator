// Object: ServerDebugVehicleSpawnerEntity
// ClassId: 7503
// RuntimeId: 58892
// TypeInfo: 0x0000000144C601D0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerDebugVehicleSpawnerEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerDebugVehicleSpawnerEntity) == 0x30);
}