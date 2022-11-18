// Object: GameTweakAITargeting
// ClassId: 520
// RuntimeId: 42583
// TypeInfo: 0x0000000144C18830
#include "../Core/Asset.h"
#include "../BattleAIShared/TinyPiecewiseLinearCurve.h"
#include "../Global/Float32.h"
#include "../BattleAIShared/AccuracyPenaltySettings.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../BattleAIShared/SoundTargetingData.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class GameTweakAITargeting : public Core::Asset {
        BattleAIShared::TinyPiecewiseLinearCurve FiringDelayAfterAquiringTarget; // 0x20
        Float32 ReaquireTargetDistanceThreshold; // 0x30
        BattleAIShared::TinyPiecewiseLinearCurve FiringDelayAfterReaquiringTarget; // 0x34
        BattleAIShared::TinyPiecewiseLinearCurve TimeUntilDamageFromStartOfFirstBurst; // 0x44
        BattleAIShared::TinyPiecewiseLinearCurve TimeUntilDamageTimeIsFullyRestored; // 0x54
        BattleAIShared::TinyPiecewiseLinearCurve TimeUntilAccurateFromStartOfFirstDamage; // 0x64
        BattleAIShared::TinyPiecewiseLinearCurve TimeUntilAccurateTimeIsFullyRestored; // 0x74
        BattleAIShared::AccuracyPenaltySettings AccuracyPenaltySettings; // 0x84
        Int32 AimingAtAngleThreshold; // 0xA0
        Float32 ExtrapolateAfterLOSLostTime; // 0xA4
        Float32 TargetSharingRadiusFar; // 0xA8
        Float32 TargetSharingRadiusNear; // 0xAC
        Float32 TargetSharingTimeSeenFar; // 0xB0
        Float32 TargetSharingTimeSeenNear; // 0xB4
        Float32 TargetSharingPriority; // 0xB8
        Float32 TargetSharingDuration; // 0xBC
        BattleAIShared::SoundTargetingData SoundTargeting; // 0xC0
        Boolean EnableTargetSharing; // 0xC8
        char pad_0xC9[0x7];
    }; // 0xD0
    static_assert(sizeof(GameTweakAITargeting) == 0xD0);
}
#pragma pack(pop)