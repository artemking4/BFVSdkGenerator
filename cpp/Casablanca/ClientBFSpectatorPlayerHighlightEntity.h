// Object: ClientBFSpectatorPlayerHighlightEntity
// ClassId: 6353
// RuntimeId: 2715
// TypeInfo: 0x0000000144CCCEA0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFSpectatorPlayerHighlightEntity : public Entity::Entity {
        char pad_0x20[0x2C0];
    }; // 0x2E0
    static_assert(sizeof(ClientBFSpectatorPlayerHighlightEntity) == 0x2E0);
}