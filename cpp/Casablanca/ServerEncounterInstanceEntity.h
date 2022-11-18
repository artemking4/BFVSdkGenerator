// Object: ServerEncounterInstanceEntity
// ClassId: 7541
// RuntimeId: 24158
// TypeInfo: 0x0000000144C5FC80
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerEncounterInstanceEntity : public Entity::Entity {
        char pad_0x20[0x2290];
    }; // 0x22B0
    static_assert(sizeof(ServerEncounterInstanceEntity) == 0x22B0);
}