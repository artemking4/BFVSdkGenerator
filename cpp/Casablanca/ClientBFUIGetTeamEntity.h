// Object: ClientBFUIGetTeamEntity
// ClassId: 6456
// RuntimeId: 8061
// TypeInfo: 0x0000000144C21490
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetTeamEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientBFUIGetTeamEntity) == 0x58);
}