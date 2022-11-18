// Object: RepulsorAutoObstacle
// ClassId: 705
// RuntimeId: 33070
// TypeInfo: 0x0000000144EAA870
#include "../Core/Asset.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Pathfinding {
    class RepulsorAutoObstacle : public Core::Asset {
        Float32 ImmobilityTime; // 0x20
        Float32 ObstacleRadiusScale; // 0x24
        Float32 ObstacleHeightScale; // 0x28
        Boolean Enable; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(RepulsorAutoObstacle) == 0x30);
}
#pragma pack(pop)