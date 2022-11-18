// Object: PathfindingStreamEntityData
// ClassId: 2935
// RuntimeId: 14394
// TypeInfo: 0x0000000144EABF80
#include "../Entity/EntityData.h"
#include "../PathfindingShared/PathfindingBlobAsset.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace PathfindingShared {
    class PathfindingStreamEntityData : public Entity::EntityData {
        PathfindingShared::PathfindingBlobAsset PathfindingBlobs; // 0x20
        Boolean Autoload; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(PathfindingStreamEntityData) == 0x30);
}
#pragma pack(pop)