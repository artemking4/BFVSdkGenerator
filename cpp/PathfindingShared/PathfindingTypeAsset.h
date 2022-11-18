// Object: PathfindingTypeAsset
// ClassId: 618
// RuntimeId: 2802
// TypeInfo: 0x0000000144EAC080
#include "../Core/Asset.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace PathfindingShared {
    class PathfindingTypeAsset : public Core::Asset {
        Uint32 Index; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(PathfindingTypeAsset) == 0x28);
}
#pragma pack(pop)