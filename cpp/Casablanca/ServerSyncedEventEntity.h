// Object: ServerSyncedEventEntity
// ClassId: 7736
// RuntimeId: 31781
// TypeInfo: 0x0000000144CDFEF0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerSyncedEventEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ServerSyncedEventEntity) == 0x70);
}