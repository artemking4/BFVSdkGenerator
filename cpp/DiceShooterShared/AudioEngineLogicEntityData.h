// Object: AudioEngineLogicEntityData
// ClassId: 2068
// RuntimeId: 60418
// TypeInfo: 0x0000000144DF3470
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../Core/FloatCurve.h"
#include "../DiceShooterShared/AudioEngineGearConfigData.h"
#include "../Global/Boolean.h"
#include "../DiceShooterShared/EngineLfoData.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class AudioEngineLogicEntityData : public Entity::EntityData {
        Float32 SuspensionHitTime; // 0x20
        Float32 SuspensionHitRpmProportion; // 0x24
        Float32 SuspensionHitTriggerDelta; // 0x28
        char pad_0x2C[0x4];
        Core::FloatCurve SuspensionHitProfile; // 0x30
        Array<DiceShooterShared::AudioEngineGearConfigData> ForwardGearConfigs; // 0x38
        Float32 DeceleratingMinRpmOffset; // 0x40
        Float32 TimeToMaxRpm; // 0x44
        Float32 TimeToMinRpm; // 0x48
        Float32 TimeToMinRpmDuringShift; // 0x4C
        Float32 AccelerationThresholdForRpmDrop; // 0x50
        Float32 YawSpeedForRpmDrop; // 0x54
        Float32 RpmWobbleThreshold; // 0x58
        Float32 RpmWobbleRange; // 0x5C
        Float32 RpmWobbleFrequency; // 0x60
        Float32 RpmLowerWobbleThreshold; // 0x64
        Float32 RpmLowerWobbleRange; // 0x68
        Float32 RpmLowerWobbleFrequency; // 0x6C
        Float32 GearChangeTime; // 0x70
        Float32 GearChangeDownTime; // 0x74
        Float32 GearChangeUpTimeAtMaxRpm; // 0x78
        Float32 GearChangeDownTimeAtMinRpm; // 0x7C
        Float32 GearChangeMinRpmOffset; // 0x80
        DiceShooterShared::EngineLfoData GearChangeShuntLFO; // 0x84
        Int32 MaxForwardGear; // 0x90
        Float32 SuppressGearChangeAfterLandingTime; // 0x94
        Float32 LoadLerp; // 0x98
        Float32 PhysicalEngineLoadModifier; // 0x9C
        Core::FloatCurve ThrottleResponseCurve; // 0xA0
        Float32 ThrottleResponseTime; // 0xA8
        Float32 ThrottleDeltaToTriggerResponse; // 0xAC
        Float32 ThrottleResponseRpmProportion; // 0xB0
        Float32 MinSpeedForFirstGearUpShift; // 0xB4
        Float32 SimulatedMaxRPM; // 0xB8
        Float32 RpmDropScaleWhenTurning; // 0xBC
        Boolean ApplyOnlyWhenStuckTurning; // 0xC0
        Boolean ChangeToFirstGearWhenSlowTurningOrStuck; // 0xC1
        char pad_0xC2[0x6];
    }; // 0xC8
    static_assert(sizeof(AudioEngineLogicEntityData) == 0xC8);
}
#pragma pack(pop)