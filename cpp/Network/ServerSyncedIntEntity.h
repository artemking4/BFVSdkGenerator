// Object: ServerSyncedIntEntity
// ClassId: 7739
// RuntimeId: 40707
// TypeInfo: 0x0000000144EA6DD0
#include "../Entity/Entity.h"

namespace Network {
    class ServerSyncedIntEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ServerSyncedIntEntity) == 0x70);
}