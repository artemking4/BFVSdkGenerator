// Object: ServerSyncedFloatArrayEntity
// ClassId: 7737
// RuntimeId: 64228
// TypeInfo: 0x0000000144CE2120
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerSyncedFloatArrayEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(ServerSyncedFloatArrayEntity) == 0x78);
}