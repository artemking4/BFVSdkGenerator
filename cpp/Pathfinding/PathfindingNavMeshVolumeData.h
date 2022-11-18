// Object: PathfindingNavMeshVolumeData
// ClassId: 1653
// RuntimeId: 58931
// TypeInfo: 0x0000000144EA9B70
#include "../Entity/OBBData.h"
#include "../Entity/PathfindingObjectCategoryAsset.h"

#pragma pack(push, 16)
namespace Pathfinding {
    class PathfindingNavMeshVolumeData : public Entity::OBBData {
        Entity::PathfindingObjectCategoryAsset Category; // 0x70
        char pad_0x78[0x8];
    }; // 0x80
    static_assert(sizeof(PathfindingNavMeshVolumeData) == 0x80);
}
#pragma pack(pop)