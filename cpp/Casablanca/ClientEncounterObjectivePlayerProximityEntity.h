// Object: ClientEncounterObjectivePlayerProximityEntity
// ClassId: 6687
// RuntimeId: 40731
// TypeInfo: 0x0000000144C8DF50
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientEncounterObjectivePlayerProximityEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientEncounterObjectivePlayerProximityEntity) == 0x60);
}