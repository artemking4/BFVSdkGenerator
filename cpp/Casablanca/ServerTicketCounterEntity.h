// Object: ServerTicketCounterEntity
// ClassId: 7752
// RuntimeId: 22409
// TypeInfo: 0x0000000144CE1DF0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerTicketCounterEntity : public Entity::Entity {
        char pad_0x20[0xD8];
    }; // 0xF8
    static_assert(sizeof(ServerTicketCounterEntity) == 0xF8);
}