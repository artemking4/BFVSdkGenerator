// Object: ClientInputMessageTriggerEntity
// ClassId: 6729
// RuntimeId: 8282
// TypeInfo: 0x0000000144C9CB50
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientInputMessageTriggerEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientInputMessageTriggerEntity) == 0x40);
}