// Object: ClientUIOnlineEntity
// ClassId: 6979
// RuntimeId: 46159
// TypeInfo: 0x0000000144CB5240
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIOnlineEntity : public Entity::Entity {
        char pad_0x20[0x68];
    }; // 0x88
    static_assert(sizeof(ClientUIOnlineEntity) == 0x88);
}