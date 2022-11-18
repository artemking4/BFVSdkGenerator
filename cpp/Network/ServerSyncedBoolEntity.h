// Object: ServerSyncedBoolEntity
// ClassId: 7735
// RuntimeId: 46233
// TypeInfo: 0x0000000144EA6770
#include "../Entity/Entity.h"

namespace Network {
    class ServerSyncedBoolEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ServerSyncedBoolEntity) == 0x70);
}