// Object: ClientBFUIGetSoldierSlotEntity
// ClassId: 6447
// RuntimeId: 11090
// TypeInfo: 0x0000000144CC3F00
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetSoldierSlotEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientBFUIGetSoldierSlotEntity) == 0x60);
}