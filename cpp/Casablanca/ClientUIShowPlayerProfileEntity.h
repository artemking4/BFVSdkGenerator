// Object: ClientUIShowPlayerProfileEntity
// ClassId: 7001
// RuntimeId: 10282
// TypeInfo: 0x0000000144CB83A0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIShowPlayerProfileEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientUIShowPlayerProfileEntity) == 0x40);
}