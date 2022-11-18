// Object: SoldierAimingSimulationData
// ClassId: 4078
// RuntimeId: 10789
// TypeInfo: 0x0000000144F43B30
#include "../Core/GameDataContainer.h"
#include "../SoldierShared/ZoomLevelData.h"
#include "../Global/Boolean.h"
#include "../SoldierShared/SoldierAimAssistData.h"
#include "../SoldierShared/PlatformAimAssistData.h"
#include "../SoldierShared/AimingPoseData.h"
#include "../Global/Float32.h"
#include "../SoldierShared/ZoomLevelSpecificTransitionTime.h"
#include "../GameShared/ProfileOptionDataFloat.h"
#include "../GameShared/ProfileOptionDataBool.h"
#include "../SoldierShared/AimerModifierData.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class SoldierAimingSimulationData : public Core::GameDataContainer {
        Array<SoldierShared::ZoomLevelData> ZoomLevels; // 0x18
        SoldierShared::SoldierAimAssistData AimAssist; // 0x20
        Array<SoldierShared::PlatformAimAssistData> PlatformAimAssists; // 0x28
        SoldierShared::AimingPoseData StandPose; // 0x30
        SoldierShared::AimingPoseData CrouchPose; // 0x48
        SoldierShared::AimingPoseData PronePose; // 0x60
        Float32 ZoomTransitionTime; // 0x78
        char pad_0x7C[0x4];
        Array<SoldierShared::ZoomLevelSpecificTransitionTime> ZoomTransitionTimeArray; // 0x80
        Float32 FovDelayTime; // 0x88
        Float32 FovTransitionTime; // 0x8C
        Float32 AimingRange; // 0x90
        Float32 LockAimToTargetSpeed; // 0x94
        GameShared::ProfileOptionDataFloat ZoomLookSpeedSensitivity; // 0x98
        GameShared::ProfileOptionDataBool UniformAiming; // 0xA0
        GameShared::ProfileOptionDataFloat UniformAimingCoefficient; // 0xA8
        GameShared::ProfileOptionDataBool SmoothZoomInputSensitivity; // 0xB0
        Array<SoldierShared::AimerModifierData> Modifiers; // 0xB8
        Boolean ReturnToZoomAfterReload; // 0xC0
        Boolean UpdateCameraFOV; // 0xC1
        char pad_0xC2[0x6];
    }; // 0xC8
    static_assert(sizeof(SoldierAimingSimulationData) == 0xC8);
}
#pragma pack(pop)