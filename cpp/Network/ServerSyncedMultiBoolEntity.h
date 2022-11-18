// Object: ServerSyncedMultiBoolEntity
// ClassId: 7740
// RuntimeId: 5332
// TypeInfo: 0x0000000144EA6330
#include "../Entity/Entity.h"

namespace Network {
    class ServerSyncedMultiBoolEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ServerSyncedMultiBoolEntity) == 0x70);
}