// Object: ClientNarrativeManagerEntity
// ClassId: 6758
// RuntimeId: 7640
// TypeInfo: 0x0000000144C49D10
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientNarrativeManagerEntity : public Entity::Entity {
        char pad_0x20[0xC8];
    }; // 0xE8
    static_assert(sizeof(ClientNarrativeManagerEntity) == 0xE8);
}