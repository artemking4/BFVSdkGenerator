// Object: ClientUISquadControlEntity
// ClassId: 7007
// RuntimeId: 58259
// TypeInfo: 0x0000000144CB4470
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUISquadControlEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(ClientUISquadControlEntity) == 0xC0);
}