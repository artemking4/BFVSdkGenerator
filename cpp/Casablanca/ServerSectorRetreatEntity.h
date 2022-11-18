// Object: ServerSectorRetreatEntity
// ClassId: 7705
// RuntimeId: 65490
// TypeInfo: 0x0000000144CEB060
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerSectorRetreatEntity : public Entity::Entity {
        char pad_0x20[0x2A0];
    }; // 0x2C0
    static_assert(sizeof(ServerSectorRetreatEntity) == 0x2C0);
}