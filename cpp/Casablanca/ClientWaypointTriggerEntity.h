// Object: ClientWaypointTriggerEntity
// ClassId: 7054
// RuntimeId: 30901
// TypeInfo: 0x0000000144C221B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientWaypointTriggerEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ClientWaypointTriggerEntity) == 0x68);
}