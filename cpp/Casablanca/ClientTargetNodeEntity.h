// Object: ClientTargetNodeEntity
// ClassId: 6894
// RuntimeId: 55844
// TypeInfo: 0x0000000144C54220
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientTargetNodeEntity : public Entity::Entity {
        char pad_0x20[0x190];
    }; // 0x1B0
    static_assert(sizeof(ClientTargetNodeEntity) == 0x1B0);
}