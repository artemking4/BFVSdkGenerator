// Object: ServerEncounterRandomEntity
// ClassId: 7542
// RuntimeId: 40525
// TypeInfo: 0x0000000144C60720
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerEncounterRandomEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ServerEncounterRandomEntity) == 0x60);
}