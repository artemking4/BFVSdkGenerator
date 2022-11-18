// Object: ServerEntryLinkHubEntity
// ClassId: 7543
// RuntimeId: 32148
// TypeInfo: 0x0000000144C3F0E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerEntryLinkHubEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ServerEntryLinkHubEntity) == 0x38);
}