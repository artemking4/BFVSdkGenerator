// Object: PathfindingDebugSettings
// ClassId: 5007
// RuntimeId: 50858
// TypeInfo: 0x0000000144EAC000
#include "../Core/SystemSettings.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../PathfindingShared/PathfindingReplayMode.h"

#pragma pack(push, 8)
namespace PathfindingShared {
    class PathfindingDebugSettings : public Core::SystemSettings {
        Int32 DrawNavMesh; // 0x20
        Float32 DrawDistance; // 0x24
        Int32 TextStartX; // 0x28
        Int32 TextStartY; // 0x2C
        Int32 TextOffsetY; // 0x30
        PathfindingShared::PathfindingReplayMode ReplayMode; // 0x34
        Boolean DrawPolygonOutline; // 0x38
        Boolean DrawFilledPolygons; // 0x39
        Boolean DrawConnections; // 0x3A
        Boolean DrawObstacles; // 0x3B
        Boolean DrawAreaNormals; // 0x3C
        Boolean DrawObstacleFlags; // 0x3D
        Boolean DrawAreaPenaltyMults; // 0x3E
        Boolean DrawAreaUsageFlags; // 0x3F
        Boolean ColorizeAreaUsageFlags; // 0x40
        Boolean DrawLinkUsageDistances; // 0x41
        Boolean DrawLinkUsageFlags; // 0x42
        Boolean DrawOriginalLinkLocations; // 0x43
        Boolean DrawRecentNavProbes; // 0x44
        Boolean DrawRecentCreatePolyLinePaths; // 0x45
        Boolean DrawMoverCylinders; // 0x46
        Boolean DrawMoverGoals; // 0x47
        Boolean DrawMoverGoalsReached; // 0x48
        Boolean DrawMoverState; // 0x49
        Boolean DrawMoverAttractions; // 0x4A
        Boolean DrawRepulsors; // 0x4B
        Boolean DrawClientMotion; // 0x4C
        Boolean DrawCurPathSection; // 0x4D
        Boolean DrawFollowerGoals; // 0x4E
        Boolean DepthTest; // 0x4F
        Boolean DrawStats; // 0x50
        Boolean DrawMemory; // 0x51
        Boolean DrawTimings; // 0x52
        Boolean OriginalPaths; // 0x53
        Boolean RandomPositions; // 0x54
        Boolean PotentialObstacles; // 0x55
        char pad_0x56[0x2];
    }; // 0x58
    static_assert(sizeof(PathfindingDebugSettings) == 0x58);
}
#pragma pack(pop)