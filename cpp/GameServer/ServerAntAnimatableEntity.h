// Object: ServerAntAnimatableEntity
// ClassId: 7441
// RuntimeId: 4292
// TypeInfo: 0x0000000144E5E5A0
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerAntAnimatableEntity : public Entity::Entity {
        char pad_0x20[0x840];
    }; // 0x860
    static_assert(sizeof(ServerAntAnimatableEntity) == 0x860);
}