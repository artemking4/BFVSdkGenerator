// Object: ZoomLevelData
// ClassId: 5725
// RuntimeId: 46
// TypeInfo: 0x0000000144F43BB0
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../GameShared/FOVTransitionData.h"
#include "../Global/Boolean.h"
#include "../GameShared/ProfileOptionDataFloat.h"
#include "../SoldierShared/ZoomLevelActivateEventType.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class ZoomLevelData : public Core::DataContainer {
        Float32 FieldOfView; // 0x18
        Float32 FieldOfViewSP; // 0x1C
        GameShared::FOVTransitionData FieldOfViewTransition; // 0x20
        Float32 LookSpeedMultiplier; // 0x28
        Float32 SprintLookSpeedMultiplier; // 0x2C
        GameShared::ProfileOptionDataFloat LookSpeedSensitivityProfileOption; // 0x30
        Float32 MoveSpeedMultiplier; // 0x38
        Float32 SwayPitchMagnitude; // 0x3C
        Float32 SwayYawMagnitude; // 0x40
        Float32 SupportedSwayPitchMagnitude; // 0x44
        Float32 SupportedSwayYawMagnitude; // 0x48
        Float32 SuppressedSwayPitchMagnitude; // 0x4C
        Float32 SuppressedSwayYawMagnitude; // 0x50
        Float32 SuppressedSwayMinMagnitude; // 0x54
        Float32 SuppressedSwayFrequencyMultiplier; // 0x58
        Float32 SuppressedSwayFrequencyMultiplierWhenSupported; // 0x5C
        Float32 TimePitchMultiplier; // 0x60
        Float32 TimeYawMultiplier; // 0x64
        Float32 DispersionMultiplier; // 0x68
        Float32 DispersionRotation; // 0x6C
        Float32 RecoilMultiplier; // 0x70
        Float32 RecoilFovMultiplier; // 0x74
        Float32 CameraImpulseMultiplier; // 0x78
        Float32 StartFadeToBlackAtTime; // 0x7C
        Float32 FadeToBlackDuration; // 0x80
        Float32 StartFadeFromBlackAtTime; // 0x84
        Float32 FadeFromBlackDuration; // 0x88
        Float32 ScreenExposureAreaScale; // 0x8C
        SoldierShared::ZoomLevelActivateEventType OnActivateEventType; // 0x90
        Float32 AttractYawStrength; // 0x94
        Float32 AttractPitchStrength; // 0x98
        Boolean AllowFieldOfViewScaling; // 0x9C
        Boolean FadeToBlackInZoomTransition; // 0x9D
        Boolean UseFovSpecialisation; // 0x9E
        Boolean UseWeaponMeshZoom1p; // 0x9F
    }; // 0xA0
    static_assert(sizeof(ZoomLevelData) == 0xA0);
}
#pragma pack(pop)