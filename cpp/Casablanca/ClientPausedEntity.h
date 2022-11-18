// Object: ClientPausedEntity
// ClassId: 6774
// RuntimeId: 42646
// TypeInfo: 0x0000000144C55210
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPausedEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientPausedEntity) == 0x40);
}