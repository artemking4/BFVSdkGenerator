// Object: ServerEncounterAIObjectiveEntity
// ClassId: 8020
// RuntimeId: 53401
// TypeInfo: 0x0000000144C60C70
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ServerEncounterAIObjectiveEntity : public Entity::SpatialEntity {
        char pad_0x30[0x110];
    }; // 0x140
    static_assert(sizeof(ServerEncounterAIObjectiveEntity) == 0x140);
}