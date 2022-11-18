// Object: AIFollowWaypointsOrderEntityData
// ClassId: 1983
// RuntimeId: 35853
// TypeInfo: 0x0000000144C10A80
#include "../BattleAIShared/AIOrderEntityBaseData.h"
#include "../Core/LinearTransform.h"
#include "../PathfindingShared/RouteType.h"
#include "../Global/Boolean.h"
#include "../PathfindingShared/PathfindingChoice.h"
#include "../BattleAIShared/AIPathlinkUsageType.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class AIFollowWaypointsOrderEntityData : public BattleAIShared::AIOrderEntityBaseData {
        PathfindingShared::RouteType TypeOfRoute; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform WaypointTransform; // 0x30
        PathfindingShared::PathfindingChoice PathFinding; // 0x70
        BattleAIShared::AIPathlinkUsageType PathlinkUsageType; // 0x74
        Boolean StartAtGeometricallyClosestWaypoint; // 0x78
        Boolean UsePhysicsDrivenLocomotion; // 0x79
        char pad_0x7A[0x6];
    }; // 0x80
    static_assert(sizeof(AIFollowWaypointsOrderEntityData) == 0x80);
}
#pragma pack(pop)