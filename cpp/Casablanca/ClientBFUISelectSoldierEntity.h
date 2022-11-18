// Object: ClientBFUISelectSoldierEntity
// ClassId: 6561
// RuntimeId: 42242
// TypeInfo: 0x0000000144CA5E10
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISelectSoldierEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUISelectSoldierEntity) == 0x40);
}