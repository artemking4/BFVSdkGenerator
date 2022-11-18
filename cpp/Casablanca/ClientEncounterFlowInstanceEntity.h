// Object: ClientEncounterFlowInstanceEntity
// ClassId: 6685
// RuntimeId: 51108
// TypeInfo: 0x0000000144C8E170
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientEncounterFlowInstanceEntity : public Entity::Entity {
        char pad_0x20[0xF0];
    }; // 0x110
    static_assert(sizeof(ClientEncounterFlowInstanceEntity) == 0x110);
}