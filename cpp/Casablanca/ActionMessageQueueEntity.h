// Object: ActionMessageQueueEntity
// ClassId: 6174
// RuntimeId: 59579
// TypeInfo: 0x0000000144CE2A70
#include "../Entity/Entity.h"

namespace Casablanca {
    class ActionMessageQueueEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ActionMessageQueueEntity) == 0x68);
}