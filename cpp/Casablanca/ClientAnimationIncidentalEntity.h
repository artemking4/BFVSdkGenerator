// Object: ClientAnimationIncidentalEntity
// ClassId: 6326
// RuntimeId: 64515
// TypeInfo: 0x0000000144C56EE0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientAnimationIncidentalEntity : public Entity::Entity {
        char pad_0x20[0xF8];
    }; // 0x118
    static_assert(sizeof(ClientAnimationIncidentalEntity) == 0x118);
}