// Object: ClientUITeamEntity
// ClassId: 7014
// RuntimeId: 56197
// TypeInfo: 0x0000000144CB7270
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUITeamEntity : public Entity::Entity {
        char pad_0x20[0x1C8];
    }; // 0x1E8
    static_assert(sizeof(ClientUITeamEntity) == 0x1E8);
}