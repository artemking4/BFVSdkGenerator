// Object: BlueprintBundleCollectionEntityBase
// ClassId: 6260
// RuntimeId: 40448
// TypeInfo: 0x0000000144E4C7E0
#include "../Entity/Entity.h"

namespace GameCommon {
    class BlueprintBundleCollectionEntityBase : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(BlueprintBundleCollectionEntityBase) == 0x80);
}