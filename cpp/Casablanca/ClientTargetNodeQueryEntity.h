// Object: ClientTargetNodeQueryEntity
// ClassId: 6895
// RuntimeId: 26106
// TypeInfo: 0x0000000144C54330
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientTargetNodeQueryEntity : public Entity::Entity {
        char pad_0x20[0x80];
    }; // 0xA0
    static_assert(sizeof(ClientTargetNodeQueryEntity) == 0xA0);
}