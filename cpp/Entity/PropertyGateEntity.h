// Object: PropertyGateEntity
// ClassId: 7332
// RuntimeId: 4551
// TypeInfo: 0x0000000144ECD9B0
#include "../Entity/Entity.h"

namespace Entity {
    class PropertyGateEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(PropertyGateEntity) == 0x68);
}