// Object: ClientBFUIBoostActivationEntity
// ClassId: 6364
// RuntimeId: 63726
// TypeInfo: 0x0000000144C86530
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIBoostActivationEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUIBoostActivationEntity) == 0x40);
}