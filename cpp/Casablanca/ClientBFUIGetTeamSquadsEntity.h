// Object: ClientBFUIGetTeamSquadsEntity
// ClassId: 6458
// RuntimeId: 24546
// TypeInfo: 0x0000000144C5A460
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetTeamSquadsEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientBFUIGetTeamSquadsEntity) == 0x58);
}