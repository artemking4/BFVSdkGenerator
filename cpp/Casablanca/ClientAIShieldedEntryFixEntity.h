// Object: ClientAIShieldedEntryFixEntity
// ClassId: 6302
// RuntimeId: 61172
// TypeInfo: 0x0000000144C90EC0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientAIShieldedEntryFixEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientAIShieldedEntryFixEntity) == 0x30);
}