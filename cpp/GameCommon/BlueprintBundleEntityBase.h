// Object: BlueprintBundleEntityBase
// ClassId: 6263
// RuntimeId: 24735
// TypeInfo: 0x0000000144E4C6D0
#include "../Entity/Entity.h"

namespace GameCommon {
    class BlueprintBundleEntityBase : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(BlueprintBundleEntityBase) == 0x78);
}