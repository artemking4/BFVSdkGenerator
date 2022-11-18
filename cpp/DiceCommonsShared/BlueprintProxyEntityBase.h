// Object: BlueprintProxyEntityBase
// ClassId: 6267
// RuntimeId: 60022
// TypeInfo: 0x0000000144DB6FA0
#include "../Entity/Entity.h"

namespace DiceCommonsShared {
    class BlueprintProxyEntityBase : public Entity::Entity {
        char pad_0x20[0x78];
    }; // 0x98
    static_assert(sizeof(BlueprintProxyEntityBase) == 0x98);
}