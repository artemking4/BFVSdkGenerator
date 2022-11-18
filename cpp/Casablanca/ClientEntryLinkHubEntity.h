// Object: ClientEntryLinkHubEntity
// ClassId: 6689
// RuntimeId: 41881
// TypeInfo: 0x0000000144CD2110
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientEntryLinkHubEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientEntryLinkHubEntity) == 0x38);
}