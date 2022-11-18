// Object: PathfindingBlobAsset
// ClassId: 616
// RuntimeId: 47229
// TypeInfo: 0x0000000144EAC280
#include "../Core/Asset.h"
#include "../PathfindingShared/PathfindingBlob.h"

#pragma pack(push, 8)
namespace PathfindingShared {
    class PathfindingBlobAsset : public Core::Asset {
        Array<PathfindingShared::PathfindingBlob> Blobs; // 0x20
    }; // 0x28
    static_assert(sizeof(PathfindingBlobAsset) == 0x28);
}
#pragma pack(pop)