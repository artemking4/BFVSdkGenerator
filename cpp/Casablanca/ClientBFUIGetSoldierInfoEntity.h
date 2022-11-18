// Object: ClientBFUIGetSoldierInfoEntity
// ClassId: 6445
// RuntimeId: 23175
// TypeInfo: 0x0000000144CC4230
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetSoldierInfoEntity : public Entity::Entity {
        char pad_0x20[0x88];
    }; // 0xA8
    static_assert(sizeof(ClientBFUIGetSoldierInfoEntity) == 0xA8);
}