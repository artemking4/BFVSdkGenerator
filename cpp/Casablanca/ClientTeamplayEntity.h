// Object: ClientTeamplayEntity
// ClassId: 6899
// RuntimeId: 17587
// TypeInfo: 0x0000000144C931B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientTeamplayEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(ClientTeamplayEntity) == 0x78);
}