// Object: ServerAreaQueryEntity
// ClassId: 7442
// RuntimeId: 63411
// TypeInfo: 0x0000000144E5D0B0
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerAreaQueryEntity : public Entity::Entity {
        char pad_0x20[0x70];
    }; // 0x90
    static_assert(sizeof(ServerAreaQueryEntity) == 0x90);
}