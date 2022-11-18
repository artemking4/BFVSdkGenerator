// Object: ClientUICommoRoseRequestsEntity
// ClassId: 6925
// RuntimeId: 8710
// TypeInfo: 0x0000000144CA04C0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUICommoRoseRequestsEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientUICommoRoseRequestsEntity) == 0x50);
}