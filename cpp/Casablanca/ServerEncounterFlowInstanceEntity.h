// Object: ServerEncounterFlowInstanceEntity
// ClassId: 7540
// RuntimeId: 51572
// TypeInfo: 0x0000000144C5FD90
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerEncounterFlowInstanceEntity : public Entity::Entity {
        char pad_0x20[0x2C0];
    }; // 0x2E0
    static_assert(sizeof(ServerEncounterFlowInstanceEntity) == 0x2E0);
}