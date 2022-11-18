// Object: TargetingData
// ClassId: 5047
// RuntimeId: 27045
// TypeInfo: 0x0000000144C058E0
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../BattleAIShared/TinyPiecewiseLinearCurve.h"
#include "../BattleAIShared/SuppressionValues.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class TargetingData : public Core::DataContainer {
        Float32 AimOffsetY; // 0x18
        Float32 VisibleTargetLimit; // 0x1C
        Float32 TargetLostTimer; // 0x20
        BattleAIShared::TinyPiecewiseLinearCurve TargetDistanceEvaluation; // 0x24
        BattleAIShared::SuppressionValues SuppressionScore; // 0x34
        Float32 HumanSuppressionScoreMultiplier; // 0x3C
        Float32 SuppressionTimeLimit; // 0x40
        Float32 AquiredTimer; // 0x44
        Float32 AquiredObjectTimer; // 0x48
        Float32 AquiredDistScale; // 0x4C
        Float32 TargetAimingTimer; // 0x50
        Float32 CurrentHumanTargetAimingDistScale; // 0x54
        Float32 LowHealthPercentage; // 0x58
        Float32 CurrentHumanTargetLowHealthDistScale; // 0x5C
        Float32 ElevationAboveThreshold; // 0x60
        Float32 ElevationDistScaleY; // 0x64
        Float32 CurrentTargetDistScale; // 0x68
        Float32 TargetVisibleDistScale; // 0x6C
        Float32 HumanPreferenceScale; // 0x70
        Float32 TargetObjectDistScale; // 0x74
        Float32 VehicleTargetDistScale; // 0x78
        Float32 TargetLOSLostTimer; // 0x7C
        Float32 TargetLOSLostScale; // 0x80
        Boolean DisregardNonVisibleTargets; // 0x84
        Boolean UseDistanceAsSeparateScaling; // 0x85
        Boolean BalanceDistribution; // 0x86
        Boolean CanTargetUnalertedAI; // 0x87
    }; // 0x88
    static_assert(sizeof(TargetingData) == 0x88);
}
#pragma pack(pop)