// Object: ServerEncounterFlowContainerEntity
// ClassId: 7539
// RuntimeId: 30120
// TypeInfo: 0x0000000144C60940
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerEncounterFlowContainerEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(ServerEncounterFlowContainerEntity) == 0x78);
}