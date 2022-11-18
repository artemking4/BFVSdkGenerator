// Object: ClientUICommoRoseBaseEntity
// ClassId: 6923
// RuntimeId: 39108
// TypeInfo: 0x0000000144CA06E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUICommoRoseBaseEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientUICommoRoseBaseEntity) == 0x30);
}