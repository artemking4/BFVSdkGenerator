// Object: ServerAIShieldedEntryFixEntity
// ClassId: 7420
// RuntimeId: 3483
// TypeInfo: 0x0000000144C3C840
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerAIShieldedEntryFixEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerAIShieldedEntryFixEntity) == 0x30);
}