// Object: SoldierSuppressionComponentData
// ClassId: 1849
// RuntimeId: 10633
// TypeInfo: 0x0000000144DE7D90
#include "../Entity/GameComponentData.h"
#include "../DiceShooterShared/SuppressionReactionData.h"
#include "../DiceShooterShared/SuppressionReactionOverrideData.h"
#include "../Global/Float32.h"
#include "../Core/FloatCurve.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class SoldierSuppressionComponentData : public Entity::GameComponentData {
        DiceShooterShared::SuppressionReactionData ReactionToSuppression; // 0x80
        char pad_0x8C[0x4];
        Array<DiceShooterShared::SuppressionReactionOverrideData> ReactionToSuppressionOverrides; // 0x90
        Float32 SuppressionResistModifier; // 0x98
        Float32 SuppressionBoostModifier; // 0x9C
        Float32 MaxDistanceForSuppression; // 0xA0
        char pad_0xA4[0x4];
        Core::FloatCurve SuppressionDecayCurve; // 0xA8
        Float32 FallOffDelay; // 0xB0
        Float32 FallOffMultiplier; // 0xB4
        Float32 SuppressedEffectTimescale; // 0xB8
        Float32 ResetBlockThresholdWhenBelow; // 0xBC
        Float32 DoNotUpdateBlockThresholdForSuppressionAbove; // 0xC0
        Boolean SuppressionAbortsHealthRegeneration; // 0xC4
        Boolean CheckLineOfSight; // 0xC5
        Boolean IsAISuppressed; // 0xC6
        Boolean BlockAddingSuppressionLowerThenPrevious; // 0xC7
        Boolean SuppressionLevelWriteEnabled; // 0xC8
        Boolean IgnoreBulletSuppression; // 0xC9
        Boolean IgnoreExplosionSuppression; // 0xCA
        Boolean IgnoreGasSuppression; // 0xCB
        Boolean IgnoreFireSuppression; // 0xCC
        char pad_0xCD[0x3];
    }; // 0xD0
    static_assert(sizeof(SoldierSuppressionComponentData) == 0xD0);
}
#pragma pack(pop)