// Object: ClientBFUIGetSoldierLoadoutEntity
// ClassId: 6446
// RuntimeId: 18429
// TypeInfo: 0x0000000144CC4120
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetSoldierLoadoutEntity : public Entity::Entity {
        char pad_0x20[0xB8];
    }; // 0xD8
    static_assert(sizeof(ClientBFUIGetSoldierLoadoutEntity) == 0xD8);
}