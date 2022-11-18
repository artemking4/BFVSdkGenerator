// Object: ServerSyncedFloatEntity
// ClassId: 7738
// RuntimeId: 47082
// TypeInfo: 0x0000000144EA6BB0
#include "../Entity/Entity.h"

namespace Network {
    class ServerSyncedFloatEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ServerSyncedFloatEntity) == 0x70);
}