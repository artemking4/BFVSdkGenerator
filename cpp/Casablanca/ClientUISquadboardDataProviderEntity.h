// Object: ClientUISquadboardDataProviderEntity
// ClassId: 7010
// RuntimeId: 40285
// TypeInfo: 0x0000000144CBA850
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUISquadboardDataProviderEntity : public Entity::Entity {
        char pad_0x20[0xD0];
    }; // 0xF0
    static_assert(sizeof(ClientUISquadboardDataProviderEntity) == 0xF0);
}