// Object: ServerRandomTargetEntity
// ClassId: 7683
// RuntimeId: 53176
// TypeInfo: 0x0000000144CEB280
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerRandomTargetEntity : public Entity::Entity {
        char pad_0x20[0xD8];
    }; // 0xF8
    static_assert(sizeof(ServerRandomTargetEntity) == 0xF8);
}