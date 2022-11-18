// Object: BlueprintBundle
// ClassId: 732
// RuntimeId: 16760
// TypeInfo: 0x0000000144E83F40
#include "../Entity/SharedBundleBaseAsset.h"
#include "../Entity/Blueprint.h"

#pragma pack(push, 8)
namespace GameShared {
    class BlueprintBundle : public Entity::SharedBundleBaseAsset {
        Entity::Blueprint Blueprint; // 0x20
    }; // 0x28
    static_assert(sizeof(BlueprintBundle) == 0x28);
}
#pragma pack(pop)