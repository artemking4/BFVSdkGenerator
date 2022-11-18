// Object: ClientBFUISelectSoldierSlotEntity
// ClassId: 6562
// RuntimeId: 53473
// TypeInfo: 0x0000000144CA5D00
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISelectSoldierSlotEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientBFUISelectSoldierSlotEntity) == 0x38);
}