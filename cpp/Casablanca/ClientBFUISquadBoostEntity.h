// Object: ClientBFUISquadBoostEntity
// ClassId: 6590
// RuntimeId: 42655
// TypeInfo: 0x0000000144C86420
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISquadBoostEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUISquadBoostEntity) == 0x40);
}