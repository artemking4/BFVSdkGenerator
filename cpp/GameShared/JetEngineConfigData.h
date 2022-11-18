// Object: JetEngineConfigData
// ClassId: 1555
// RuntimeId: 23836
// TypeInfo: 0x0000000144E9B090
#include "../GameShared/EngineConfigData.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../GameShared/SensitivityAtVelocity.h"

#pragma pack(push, 16)
namespace GameShared {
    class JetEngineConfigData : public GameShared::EngineConfigData {
        Uint32 DirectionVectorIndex; // 0x90
        Float32 ForceMagnitudeMultiplier; // 0x94
        Float32 AngleInputYMultiplier; // 0x98
        Float32 AngleInputPitchMultiplier; // 0x9C
        Float32 PitchForceModifier; // 0xA0
        Float32 MaxVelocity; // 0xA4
        Float32 OutOfWaterContactThresholdTime; // 0xA8
        Float32 OutOfWaterContactRampDownTime; // 0xAC
        Array<GameShared::SensitivityAtVelocity> SteeringSensitivity; // 0xB0
        Boolean IsTurnable; // 0xB8
        Boolean IsWaterJetEngine; // 0xB9
        Boolean UseForcePositionWaterTest; // 0xBA
        Boolean UseHullInWaterTest; // 0xBB
        Boolean SingleGearOnly; // 0xBC
        char pad_0xBD[0x3];
    }; // 0xC0
    static_assert(sizeof(JetEngineConfigData) == 0xC0);
}
#pragma pack(pop)