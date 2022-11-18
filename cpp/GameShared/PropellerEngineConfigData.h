// Object: PropellerEngineConfigData
// ClassId: 1556
// RuntimeId: 14605
// TypeInfo: 0x0000000144E9B110
#include "../GameShared/EngineConfigData.h"
#include "../Core/Vec3.h"
#include "../GameShared/PropellerType.h"
#include "../GameShared/RotorParameters.h"
#include "../GameShared/ForceMagnitudeInputType.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace GameShared {
    class PropellerEngineConfigData : public GameShared::EngineConfigData {
        Core::Vec3 HorisontalForceOffset; // 0x90
        GameShared::PropellerType PropellerType; // 0xA0
        char pad_0xA4[0x4];
        GameShared::RotorParameters RotorConfig; // 0xA8
        GameShared::ForceMagnitudeInputType ForceMagnitudeInputType; // 0xB0
        Uint32 DirectionVectorIndex; // 0xB4
        Float32 ForceMagnitudeMultiplier; // 0xB8
        Float32 LiftForceSpringConstant; // 0xBC
        Float32 LiftForceDampingConstant; // 0xC0
        Float32 CyclicInputScaleRoll; // 0xC4
        Float32 CyclicRollLiftMod; // 0xC8
        Float32 CyclicRollStrafeMod; // 0xCC
        Float32 CyclicInputScalePitch; // 0xD0
        Float32 CyclicPitchLiftMod; // 0xD4
        Float32 CyclicPitchStrafeMod; // 0xD8
        Float32 CyclicPitchStrafeBrakeMod; // 0xDC
        Float32 CollectiveInputIdle; // 0xE0
        Float32 CollectiveThrottleInputScale; // 0xE4
        Float32 CollectiveBrakeInputScale; // 0xE8
        Float32 DefaultAngleOfAttack; // 0xEC
        Float32 AttackAngleMod; // 0xF0
        Float32 StabilizerMod; // 0xF4
        Float32 HorisontalMinEffectVelocity; // 0xF8
        Float32 HorisontalMinEffectMod; // 0xFC
        GameShared::ForceMagnitudeInputType SPForwardInput; // 0x100
        GameShared::ForceMagnitudeInputType SPSidewaysInput; // 0x104
        GameShared::ForceMagnitudeInputType SPVerticalInput; // 0x108
        GameShared::ForceMagnitudeInputType SPPitchInput; // 0x10C
        GameShared::ForceMagnitudeInputType SPYawInput; // 0x110
        Float32 SPForwardStrength; // 0x114
        Float32 SPSidewaysStrength; // 0x118
        Float32 SPVerticalStrength; // 0x11C
        Float32 SPReverseForceMod; // 0x120
        Float32 PitchStrength; // 0x124
        Float32 PitchLimit; // 0x128
        Float32 PitchFromVel; // 0x12C
        Float32 VelocityFromPitch; // 0x130
        Float32 RollStrength; // 0x134
        Float32 BankingStrength; // 0x138
        Float32 BankingLimit; // 0x13C
        Float32 PitchUpWhenBankStrength; // 0x140
        Float32 PitchUpWhenBankLimit; // 0x144
        Float32 GravityMod; // 0x148
        Boolean ApplyForceAsTorque; // 0x14C
        Boolean EnableNewHelicopter; // 0x14D
        Boolean SPAllowed; // 0x14E
        Boolean SPDefault; // 0x14F
    }; // 0x150
    static_assert(sizeof(PropellerEngineConfigData) == 0x150);
}
#pragma pack(pop)