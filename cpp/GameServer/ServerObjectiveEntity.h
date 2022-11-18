// Object: ServerObjectiveEntity
// ClassId: 7607
// RuntimeId: 49245
// TypeInfo: 0x0000000144E60190
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerObjectiveEntity : public Entity::Entity {
        char pad_0x20[0x138];
    }; // 0x158
    static_assert(sizeof(ServerObjectiveEntity) == 0x158);
}