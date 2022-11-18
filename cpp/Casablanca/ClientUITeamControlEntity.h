// Object: ClientUITeamControlEntity
// ClassId: 7013
// RuntimeId: 32387
// TypeInfo: 0x0000000144C21270
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUITeamControlEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientUITeamControlEntity) == 0x50);
}