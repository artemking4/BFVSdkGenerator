// Object: ServerChrCharEntity
// ClassId: 7464
// RuntimeId: 7276
// TypeInfo: 0x0000000144CE7C90
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerChrCharEntity : public Entity::Entity {
        char pad_0x20[0x68];
    }; // 0x88
    static_assert(sizeof(ServerChrCharEntity) == 0x88);
}