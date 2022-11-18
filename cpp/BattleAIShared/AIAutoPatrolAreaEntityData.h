// Object: AIAutoPatrolAreaEntityData
// ClassId: 1993
// RuntimeId: 33583
// TypeInfo: 0x0000000144C12280
#include "../BattleAIShared/AIParameterWithShapeEntityData.h"
#include "../PathfindingShared/WaypointsShapeData.h"
#include "../Global/Boolean.h"
#include "../BattleAIShared/AutoPatrolType.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class AIAutoPatrolAreaEntityData : public BattleAIShared::AIParameterWithShapeEntityData {
        Array<PathfindingShared::WaypointsShapeData> Waypoints; // 0x80
        BattleAIShared::AutoPatrolType PatrolType; // 0x88
        Boolean RespectDefendPoint; // 0x8C
        Boolean RespectDefendArea; // 0x8D
        char pad_0x8E[0x2];
    }; // 0x90
    static_assert(sizeof(AIAutoPatrolAreaEntityData) == 0x90);
}
#pragma pack(pop)