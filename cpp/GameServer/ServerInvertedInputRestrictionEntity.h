// Object: ServerInvertedInputRestrictionEntity
// ClassId: 7580
// RuntimeId: 28523
// TypeInfo: 0x0000000144E5C940
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerInvertedInputRestrictionEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ServerInvertedInputRestrictionEntity) == 0x60);
}