// Object: ClientBFUISquadFilterEntity
// ClassId: 6591
// RuntimeId: 8274
// TypeInfo: 0x0000000144C5A350
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISquadFilterEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUISquadFilterEntity) == 0x40);
}