// Object: ServerSimpleDriverEntity
// ClassId: 7710
// RuntimeId: 23501
// TypeInfo: 0x0000000144C64EC0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerSimpleDriverEntity : public Entity::Entity {
        char pad_0x20[0x70];
    }; // 0x90
    static_assert(sizeof(ServerSimpleDriverEntity) == 0x90);
}