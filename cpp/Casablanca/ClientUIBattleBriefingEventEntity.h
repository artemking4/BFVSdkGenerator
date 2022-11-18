// Object: ClientUIBattleBriefingEventEntity
// ClassId: 6912
// RuntimeId: 46007
// TypeInfo: 0x0000000144C9C710
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIBattleBriefingEventEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientUIBattleBriefingEventEntity) == 0x38);
}