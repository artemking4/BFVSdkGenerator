// Object: ServerCannedScenarioEntity
// ClassId: 7456
// RuntimeId: 33698
// TypeInfo: 0x0000000144E5B420
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerCannedScenarioEntity : public Entity::Entity {
        char pad_0x20[0x250];
    }; // 0x270
    static_assert(sizeof(ServerCannedScenarioEntity) == 0x270);
}