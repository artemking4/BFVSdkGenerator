// Object: ServerInputRestrictionEntity
// ClassId: 7577
// RuntimeId: 64720
// TypeInfo: 0x0000000144E5CA50
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerInputRestrictionEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ServerInputRestrictionEntity) == 0x60);
}