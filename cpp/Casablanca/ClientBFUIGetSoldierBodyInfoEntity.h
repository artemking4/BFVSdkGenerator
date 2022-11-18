// Object: ClientBFUIGetSoldierBodyInfoEntity
// ClassId: 6443
// RuntimeId: 24653
// TypeInfo: 0x0000000144CC4340
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetSoldierBodyInfoEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientBFUIGetSoldierBodyInfoEntity) == 0x50);
}