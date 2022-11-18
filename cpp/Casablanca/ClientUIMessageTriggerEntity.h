// Object: ClientUIMessageTriggerEntity
// ClassId: 6969
// RuntimeId: 79
// TypeInfo: 0x0000000144CB1FC0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIMessageTriggerEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientUIMessageTriggerEntity) == 0x38);
}