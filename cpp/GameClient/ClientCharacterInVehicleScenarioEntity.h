// Object: ClientCharacterInVehicleScenarioEntity
// ClassId: 6628
// RuntimeId: 51822
// TypeInfo: 0x0000000144E3DEB0
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientCharacterInVehicleScenarioEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientCharacterInVehicleScenarioEntity) == 0x38);
}