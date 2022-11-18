// Object: ClientAnimatableCullingHelperEntity
// ClassId: 6322
// RuntimeId: 59053
// TypeInfo: 0x0000000144C9F770
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientAnimatableCullingHelperEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(ClientAnimatableCullingHelperEntity) == 0xB0);
}