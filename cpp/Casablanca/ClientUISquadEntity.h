// Object: ClientUISquadEntity
// ClassId: 7008
// RuntimeId: 23290
// TypeInfo: 0x0000000144CB4360
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUISquadEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientUISquadEntity) == 0x50);
}