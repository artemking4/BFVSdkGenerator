// Object: AIUseWaypointsEntityData
// ClassId: 2009
// RuntimeId: 51832
// TypeInfo: 0x0000000144C12C00
#include "../BattleAIShared/AIParameterEntityData.h"
#include "../Core/LinearTransform.h"
#include "../PathfindingShared/RouteType.h"
#include "../Global/Boolean.h"
#include "../PathfindingShared/PathfindingChoice.h"
#include "../BattleAIShared/AIPathlinkUsageType.h"
#include "../BattleAIShared/ExecutionPriority.h"
#include "../BattleAIShared/TacticsEnumeration.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class AIUseWaypointsEntityData : public BattleAIShared::AIParameterEntityData {
        char pad_0x28[0x8];
        Core::LinearTransform WaypointTransform; // 0x30
        PathfindingShared::RouteType TypeOfRoute; // 0x70
        PathfindingShared::PathfindingChoice PathFinding; // 0x74
        BattleAIShared::AIPathlinkUsageType PathlinkUsageType; // 0x78
        BattleAIShared::ExecutionPriority Priority; // 0x7C
        BattleAIShared::TacticsEnumeration TacticCondition; // 0x80
        Boolean StartAtGeometricallyClosestWaypoint; // 0x84
        Boolean AllowAIControlAfterDestinationReached; // 0x85
        char pad_0x86[0xA];
    }; // 0x90
    static_assert(sizeof(AIUseWaypointsEntityData) == 0x90);
}
#pragma pack(pop)