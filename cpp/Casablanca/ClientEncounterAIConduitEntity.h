// Object: ClientEncounterAIConduitEntity
// ClassId: 6684
// RuntimeId: 34236
// TypeInfo: 0x0000000144C8E280
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientEncounterAIConduitEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(ClientEncounterAIConduitEntity) == 0xB0);
}