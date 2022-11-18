// Object: ServerSyncedVec3Entity
// ClassId: 7744
// RuntimeId: 45477
// TypeInfo: 0x0000000144EA6550
#include "../Entity/Entity.h"

namespace Network {
    class ServerSyncedVec3Entity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ServerSyncedVec3Entity) == 0x70);
}