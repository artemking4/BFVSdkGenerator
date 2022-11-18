// Object: ServerSyncedStringEntity
// ClassId: 7741
// RuntimeId: 58430
// TypeInfo: 0x0000000144CE2010
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerSyncedStringEntity : public Entity::Entity {
        char pad_0x20[0x180];
    }; // 0x1A0
    static_assert(sizeof(ServerSyncedStringEntity) == 0x1A0);
}