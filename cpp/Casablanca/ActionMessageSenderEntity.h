// Object: ActionMessageSenderEntity
// ClassId: 6175
// RuntimeId: 56135
// TypeInfo: 0x0000000144CE2DA0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ActionMessageSenderEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ActionMessageSenderEntity) == 0x30);
}