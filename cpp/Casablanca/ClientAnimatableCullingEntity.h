// Object: ClientAnimatableCullingEntity
// ClassId: 6321
// RuntimeId: 53608
// TypeInfo: 0x0000000144C49270
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientAnimatableCullingEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientAnimatableCullingEntity) == 0x38);
}