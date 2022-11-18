// Object: ServerSyncedTransformEntity
// ClassId: 7743
// RuntimeId: 62820
// TypeInfo: 0x0000000144EA6990
#include "../Entity/Entity.h"

namespace Network {
    class ServerSyncedTransformEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ServerSyncedTransformEntity) == 0x70);
}