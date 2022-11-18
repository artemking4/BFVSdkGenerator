// Object: ClientChargeEntity
// ClassId: 6632
// RuntimeId: 24287
// TypeInfo: 0x0000000144C90420
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientChargeEntity : public Entity::Entity {
        char pad_0x20[0x258];
    }; // 0x278
    static_assert(sizeof(ClientChargeEntity) == 0x278);
}