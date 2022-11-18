// Object: ServerEncounterFlowPlayerSpawnEntity
// ClassId: 8023
// RuntimeId: 55477
// TypeInfo: 0x0000000144C60830
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ServerEncounterFlowPlayerSpawnEntity : public Entity::SpatialEntity {
        char pad_0x30[0xC0];
    }; // 0xF0
    static_assert(sizeof(ServerEncounterFlowPlayerSpawnEntity) == 0xF0);
}