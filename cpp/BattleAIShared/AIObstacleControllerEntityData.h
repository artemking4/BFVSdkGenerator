// Object: AIObstacleControllerEntityData
// ClassId: 1980
// RuntimeId: 19782
// TypeInfo: 0x0000000144C11900
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../BattleAIShared/AINavObstaclePenalty.h"
#include "../BattleAIShared/AIPathfindingLayer.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIObstacleControllerEntityData : public Entity::EntityData {
        BattleAIShared::AINavObstaclePenalty Penalty; // 0x20
        char pad_0x24[0x4];
        Array<BattleAIShared::AIPathfindingLayer> AffectedLayers; // 0x28
        Boolean EnabledAtStart; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(AIObstacleControllerEntityData) == 0x38);
}
#pragma pack(pop)