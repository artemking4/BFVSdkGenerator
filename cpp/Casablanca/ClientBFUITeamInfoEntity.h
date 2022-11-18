// Object: ClientBFUITeamInfoEntity
// ClassId: 6595
// RuntimeId: 11120
// TypeInfo: 0x0000000144C21380
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUITeamInfoEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ClientBFUITeamInfoEntity) == 0x68);
}