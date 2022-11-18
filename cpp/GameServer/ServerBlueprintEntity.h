// Object: ServerBlueprintEntity
// ClassId: 7454
// RuntimeId: 54942
// TypeInfo: 0x0000000144E58D00
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerBlueprintEntity : public Entity::Entity {
        char pad_0x20[0x140];
    }; // 0x160
    static_assert(sizeof(ServerBlueprintEntity) == 0x160);
}