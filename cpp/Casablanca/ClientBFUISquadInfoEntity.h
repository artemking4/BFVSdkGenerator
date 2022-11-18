// Object: ClientBFUISquadInfoEntity
// ClassId: 6592
// RuntimeId: 58065
// TypeInfo: 0x0000000144C5A240
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISquadInfoEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(ClientBFUISquadInfoEntity) == 0xC0);
}