// Object: ServerCustomizationEntity
// ClassId: 7477
// RuntimeId: 36903
// TypeInfo: 0x0000000144CE7960
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerCustomizationEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ServerCustomizationEntity) == 0x38);
}