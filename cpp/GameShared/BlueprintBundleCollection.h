// Object: BlueprintBundleCollection
// ClassId: 187
// RuntimeId: 22899
// TypeInfo: 0x0000000144E83EC0
#include "../Core/Asset.h"
#include "../GameShared/BlueprintBundleReference.h"

#pragma pack(push, 8)
namespace GameShared {
    class BlueprintBundleCollection : public Core::Asset {
        Array<GameShared::BlueprintBundleReference> Bundles; // 0x20
    }; // 0x28
    static_assert(sizeof(BlueprintBundleCollection) == 0x28);
}
#pragma pack(pop)