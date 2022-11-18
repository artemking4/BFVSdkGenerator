// Object: BFSpectatorDirectorCameraInputHandlerEntityData
// ClassId: 2133
// RuntimeId: 53840
// TypeInfo: 0x0000000144D42950
#include "../CasablancaShared/BFSpectatorInputHandlerEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../Core/FloatCurve.h"
#include "../Core/Vec3.h"
#include "../CasablancaShared/AttachToBoneInfo.h"
#include "../Global/Boolean.h"
#include "../Core/LinearTransform.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFSpectatorDirectorCameraInputHandlerEntityData : public CasablancaShared::BFSpectatorInputHandlerEntityData {
        char pad_0x28[0x8];
        Core::Vec3 SoldierPivotOffset; // 0x30
        Core::LinearTransform TargetOverrideTransform; // 0x40
        Float32 MinMovementSpeedMultiplier; // 0x80
        Float32 MaxMovementSpeedMultiplier; // 0x84
        Float32 MinRotationSpeedMultiplier; // 0x88
        Float32 MaxRotationSpeedMultiplier; // 0x8C
        Uint32 NumSpeedLevels; // 0x90
        char pad_0x94[0x4];
        Core::FloatCurve RotateSpeedCurve; // 0x98
        Float32 MinZoomDistanceFromTarget; // 0xA0
        Float32 MaxZoomDistanceFromTarget; // 0xA4
        Float32 TrainPivotHeightOffset; // 0xA8
        Float32 MaxOffsetDistance; // 0xAC
        Float32 CameraAngleOnReset; // 0xB0
        Float32 SoldierCameraAngleOnReset; // 0xB4
        Float32 SoldierZoomDistanceOnReset; // 0xB8
        char pad_0xBC[0x4];
        Array<CasablancaShared::AttachToBoneInfo> CameraAttachSoldierBonesInfo; // 0xC0
        Float32 MinCameraFieldOfView; // 0xC8
        Float32 MaxCameraFieldOfView; // 0xCC
        Float32 ZoomSpeedMultiplier; // 0xD0
        Float32 MovementSpeedMultiplier; // 0xD4
        Float32 RotationSpeedMultiplier; // 0xD8
        Float32 CameraRollDegrees; // 0xDC
        Float32 CameraFieldOfView; // 0xE0
        Float32 RotationBufferZoneWidth; // 0xE4
        Int32 SoldierBoneIndex; // 0xE8
        Boolean SwitchSpeedEnabled; // 0xEC
        Boolean CanMoveCameraUpDown; // 0xED
        Boolean CanMoveCameraLeftRight; // 0xEE
        Boolean CanMoveCameraForwardBackward; // 0xEF
        Boolean CameraYawEnabled; // 0xF0
        Boolean CameraPitchEnabled; // 0xF1
        Boolean CameraRollEnabled; // 0xF2
        Boolean TargetRelativePitch; // 0xF3
        Boolean TargetRelativeYaw; // 0xF4
        Boolean TargetRelativeRoll; // 0xF5
        Boolean UseTargetOverrideTransform; // 0xF6
        Boolean UseInputPositionRotationMode; // 0xF7
        Boolean AttachToSoldierBone; // 0xF8
        char pad_0xF9[0x7];
    }; // 0x100
    static_assert(sizeof(BFSpectatorDirectorCameraInputHandlerEntityData) == 0x100);
}
#pragma pack(pop)