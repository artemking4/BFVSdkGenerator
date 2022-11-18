// Object: ClientTeamHealthQueryEntity
// ClassId: 6898
// RuntimeId: 10127
// TypeInfo: 0x0000000144C56660
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientTeamHealthQueryEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientTeamHealthQueryEntity) == 0x38);
}