// Object: ActionMessageListenerEntity
// ClassId: 6173
// RuntimeId: 51389
// TypeInfo: 0x0000000144CE2EB0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ActionMessageListenerEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ActionMessageListenerEntity) == 0x40);
}