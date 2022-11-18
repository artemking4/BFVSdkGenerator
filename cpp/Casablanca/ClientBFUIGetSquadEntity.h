// Object: ClientBFUIGetSquadEntity
// ClassId: 6455
// RuntimeId: 54953
// TypeInfo: 0x0000000144C5A570
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetSquadEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientBFUIGetSquadEntity) == 0x58);
}