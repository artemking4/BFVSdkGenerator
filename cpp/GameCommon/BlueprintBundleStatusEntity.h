// Object: BlueprintBundleStatusEntity
// ClassId: 6266
// RuntimeId: 7703
// TypeInfo: 0x0000000144E4CCA0
#include "../Entity/Entity.h"

namespace GameCommon {
    class BlueprintBundleStatusEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(BlueprintBundleStatusEntity) == 0x38);
}