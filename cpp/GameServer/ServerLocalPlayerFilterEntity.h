// Object: ServerLocalPlayerFilterEntity
// ClassId: 7594
// RuntimeId: 27990
// TypeInfo: 0x0000000144E60D30
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerLocalPlayerFilterEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerLocalPlayerFilterEntity) == 0x30);
}