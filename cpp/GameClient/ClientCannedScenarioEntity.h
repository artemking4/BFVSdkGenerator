// Object: ClientCannedScenarioEntity
// ClassId: 6626
// RuntimeId: 7946
// TypeInfo: 0x0000000144E36F10
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientCannedScenarioEntity : public Entity::Entity {
        char pad_0x20[0x280];
    }; // 0x2A0
    static_assert(sizeof(ClientCannedScenarioEntity) == 0x2A0);
}