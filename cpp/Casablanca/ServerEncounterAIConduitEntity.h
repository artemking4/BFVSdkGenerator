// Object: ServerEncounterAIConduitEntity
// ClassId: 7537
// RuntimeId: 47364
// TypeInfo: 0x0000000144C5E470
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerEncounterAIConduitEntity : public Entity::Entity {
        char pad_0x20[0x1A0];
    }; // 0x1C0
    static_assert(sizeof(ServerEncounterAIConduitEntity) == 0x1C0);
}