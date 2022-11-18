// Object: ServerEncounterContainerEntity
// ClassId: 7538
// RuntimeId: 61145
// TypeInfo: 0x0000000144C5FEA0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerEncounterContainerEntity : public Entity::Entity {
        char pad_0x20[0x120];
    }; // 0x140
    static_assert(sizeof(ServerEncounterContainerEntity) == 0x140);
}