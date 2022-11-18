// Object: ServerMultipleActorScenarioEntity
// ClassId: 7604
// RuntimeId: 5229
// TypeInfo: 0x0000000144E5B640
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerMultipleActorScenarioEntity : public Entity::Entity {
        char pad_0x20[0x1A0];
    }; // 0x1C0
    static_assert(sizeof(ServerMultipleActorScenarioEntity) == 0x1C0);
}