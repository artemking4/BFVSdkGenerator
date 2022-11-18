// Object: ServerCharacterInVehicleScenarioEntity
// ClassId: 7459
// RuntimeId: 57549
// TypeInfo: 0x0000000144E5EB60
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerCharacterInVehicleScenarioEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ServerCharacterInVehicleScenarioEntity) == 0x38);
}