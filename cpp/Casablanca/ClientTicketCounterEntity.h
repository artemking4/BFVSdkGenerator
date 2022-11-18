// Object: ClientTicketCounterEntity
// ClassId: 6901
// RuntimeId: 63390
// TypeInfo: 0x0000000144C930A0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientTicketCounterEntity : public Entity::Entity {
        char pad_0x20[0xD0];
    }; // 0xF0
    static_assert(sizeof(ClientTicketCounterEntity) == 0xF0);
}