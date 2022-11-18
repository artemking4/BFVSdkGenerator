// Object: ClientSoldierSquadInfoEntity
// ClassId: 6863
// RuntimeId: 45212
// TypeInfo: 0x0000000144CD7CD0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientSoldierSquadInfoEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientSoldierSquadInfoEntity) == 0x50);
}