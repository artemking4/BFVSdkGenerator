// Object: ClientComparePlayerEntity
// ClassId: 6638
// RuntimeId: 4789
// TypeInfo: 0x0000000144C9E9A0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientComparePlayerEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientComparePlayerEntity) == 0x38);
}