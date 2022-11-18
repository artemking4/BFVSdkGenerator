// Object: OldCoverQueryData
// ClassId: 605
// RuntimeId: 30408
// TypeInfo: 0x0000000144C06FE0
#include "../Core/Asset.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../BattleAIShared/CoverQueryPathEnemyAvoidanceData.h"
#include "../Global/Int32.h"
#include "../BattleAIShared/CoverQuerySpatialBase.h"
#include "../BattleAIShared/CoverQueryScoreBase.h"
#include "../BattleAIShared/CoverQueryScoreRuntime.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class OldCoverQueryData : public Core::Asset {
        Float32 LineOfFireScore; // 0x20
        Float32 MaxTargetDistanceForRejectedByLineOfFire; // 0x24
        Float32 NavigationScore; // 0x28
        Float32 PathfindingScore; // 0x2C
        Array<Float32> DistanceToTarget; // 0x30
        Array<Float32> PathfindingThresholds; // 0x38
        Float32 DefaultPathfindingThreshold; // 0x40
        Float32 PathfindingLowerLimit; // 0x44
        Float32 PathfindingUpperLimit; // 0x48
        BattleAIShared::CoverQueryPathEnemyAvoidanceData CoverQueryPathEnemyAvoidance; // 0x4C
        Float32 MaxRejectedTime; // 0x88
        Int32 MinCountForSecondaryFilter; // 0x8C
        BattleAIShared::CoverQuerySpatialBase SpatialFilter; // 0x90
        BattleAIShared::CoverQuerySpatialBase SecondarySpatialFilter; // 0x98
        Array<BattleAIShared::CoverQueryScoreBase> Scores; // 0xA0
        Array<BattleAIShared::CoverQueryScoreRuntime> RuntimeScores; // 0xA8
        Boolean RejectInvalidPaths; // 0xB0
        Boolean RejectUnreachableCovers; // 0xB1
        char pad_0xB2[0x6];
    }; // 0xB8
    static_assert(sizeof(OldCoverQueryData) == 0xB8);
}
#pragma pack(pop)